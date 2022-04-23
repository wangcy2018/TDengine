#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "uv.h"
#include "os.h"
#include "tudf.h"
#include "tdatablock.h"

int main(int argc, char *argv[]) {
  UdfcHandle udfc;
  udfcOpen(&udfc);
    uv_sleep(1000);
    char path[256] = {0};
    size_t cwdSize = 256;
    int err = uv_cwd(path, &cwdSize);
    if (err != 0) {
        fprintf(stderr, "err cwd: %s\n", uv_strerror(err));
	    return err;
    }
    fprintf(stdout, "current working directory:%s\n", path);
    strcat(path, "/libudf1.so");

    UdfcFuncHandle handle;
    SEpSet epSet;
    setupUdf(udfc, "udf1", &epSet, &handle);

    SSDataBlock block = {0};
    SSDataBlock* pBlock = &block;
    pBlock->pDataBlock = taosArrayInit(1, sizeof(SColumnInfoData));
    pBlock->info.numOfCols = 1;
    pBlock->info.rows = 4;
    char data[16] = {0};
    char bitmap[4] = {0};
    for (int32_t i = 0; i < pBlock->info.numOfCols; ++i) {
      SColumnInfoData colInfo = {0};
      colInfo.info.type = TSDB_DATA_TYPE_INT;
      colInfo.info.bytes = sizeof(int32_t);
      colInfo.info.colId = 1;
      colInfo.pData = data;
      colInfo.nullbitmap = bitmap;
      for (int32_t j = 0; j < pBlock->info.rows; ++j) {
        colDataAppendInt32(&colInfo, j, &j);
      }
      taosArrayPush(pBlock->pDataBlock, &colInfo);
    }

    SScalarParam input = {0};
    input.numOfRows = pBlock->info.rows;
    input.columnData = taosArrayGet(pBlock->pDataBlock, 0);
    SScalarParam output = {0};
    callUdfScalarFunc(handle, &input, 1 , &output);

    SColumnInfoData *col = output.columnData;
    for (int32_t i = 0; i < output.numOfRows; ++i) {
      fprintf(stderr, "%d\t%d\n" , i, *(int32_t*)(col->pData + i *sizeof(int32_t)));
    }
    teardownUdf(handle);

    udfcClose(udfc);
}
