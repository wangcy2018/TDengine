/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _TD_COMMON_TOKEN_H_
#define _TD_COMMON_TOKEN_H_

#define TK_OR            1
#define TK_AND           2
#define TK_UNION         3
#define TK_ALL           4
#define TK_MINUS         5
#define TK_EXCEPT        6
#define TK_INTERSECT     7
#define TK_NK_BITAND     8
#define TK_NK_BITOR      9
#define TK_NK_LSHIFT     10
#define TK_NK_RSHIFT     11
#define TK_NK_PLUS       12
#define TK_NK_MINUS      13
#define TK_NK_STAR       14
#define TK_NK_SLASH      15
#define TK_NK_REM        16
#define TK_NK_CONCAT     17
#define TK_CREATE        18
#define TK_ACCOUNT       19
#define TK_NK_ID         20
#define TK_PASS          21
#define TK_NK_STRING     22
#define TK_ALTER         23
#define TK_PPS           24
#define TK_TSERIES       25
#define TK_STORAGE       26
#define TK_STREAMS       27
#define TK_QTIME         28
#define TK_DBS           29
#define TK_USERS         30
#define TK_CONNS         31
#define TK_STATE         32
#define TK_USER          33
#define TK_ENABLE        34
#define TK_NK_INTEGER    35
#define TK_SYSINFO       36
#define TK_DROP          37
#define TK_GRANT         38
#define TK_ON            39
#define TK_TO            40
#define TK_REVOKE        41
#define TK_FROM          42
#define TK_NK_COMMA      43
#define TK_READ          44
#define TK_WRITE         45
#define TK_NK_DOT        46
#define TK_DNODE         47
#define TK_PORT          48
#define TK_DNODES        49
#define TK_NK_IPTOKEN    50
#define TK_LOCAL         51
#define TK_QNODE         52
#define TK_BNODE         53
#define TK_SNODE         54
#define TK_MNODE         55
#define TK_DATABASE      56
#define TK_USE           57
#define TK_FLUSH         58
#define TK_IF            59
#define TK_NOT           60
#define TK_EXISTS        61
#define TK_BUFFER        62
#define TK_CACHELAST     63
#define TK_COMP          64
#define TK_DURATION      65
#define TK_NK_VARIABLE   66
#define TK_FSYNC         67
#define TK_MAXROWS       68
#define TK_MINROWS       69
#define TK_KEEP          70
#define TK_PAGES         71
#define TK_PAGESIZE      72
#define TK_PRECISION     73
#define TK_REPLICA       74
#define TK_STRICT        75
#define TK_WAL           76
#define TK_VGROUPS       77
#define TK_SINGLE_STABLE 78
#define TK_RETENTIONS    79
#define TK_SCHEMALESS    80
#define TK_NK_COLON      81
#define TK_TABLE         82
#define TK_NK_LP         83
#define TK_NK_RP         84
#define TK_STABLE        85
#define TK_ADD           86
#define TK_COLUMN        87
#define TK_MODIFY        88
#define TK_RENAME        89
#define TK_TAG           90
#define TK_SET           91
#define TK_NK_EQ         92
#define TK_USING         93
#define TK_TAGS          94
#define TK_COMMENT       95
#define TK_BOOL          96
#define TK_TINYINT       97
#define TK_SMALLINT      98
#define TK_INT           99
#define TK_INTEGER       100
#define TK_BIGINT        101
#define TK_FLOAT         102
#define TK_DOUBLE        103
#define TK_BINARY        104
#define TK_TIMESTAMP     105
#define TK_NCHAR         106
#define TK_UNSIGNED      107
#define TK_JSON          108
#define TK_VARCHAR       109
#define TK_MEDIUMBLOB    110
#define TK_BLOB          111
#define TK_VARBINARY     112
#define TK_DECIMAL       113
#define TK_MAX_DELAY     114
#define TK_WATERMARK     115
#define TK_ROLLUP        116
#define TK_TTL           117
#define TK_SMA           118
#define TK_FIRST         119
#define TK_LAST          120
#define TK_SHOW          121
#define TK_DATABASES     122
#define TK_TABLES        123
#define TK_STABLES       124
#define TK_MNODES        125
#define TK_MODULES       126
#define TK_QNODES        127
#define TK_FUNCTIONS     128
#define TK_INDEXES       129
#define TK_ACCOUNTS      130
#define TK_APPS          131
#define TK_CONNECTIONS   132
#define TK_LICENCE       133
#define TK_GRANTS        134
#define TK_QUERIES       135
#define TK_SCORES        136
#define TK_TOPICS        137
#define TK_VARIABLES     138
#define TK_BNODES        139
#define TK_SNODES        140
#define TK_CLUSTER       141
#define TK_TRANSACTIONS  142
#define TK_DISTRIBUTED   143
#define TK_CONSUMERS     144
#define TK_SUBSCRIPTIONS 145
#define TK_LIKE          146
#define TK_INDEX         147
#define TK_FUNCTION      148
#define TK_INTERVAL      149
#define TK_TOPIC         150
#define TK_AS            151
#define TK_WITH          152
#define TK_META          153
#define TK_CONSUMER      154
#define TK_GROUP         155
#define TK_DESC          156
#define TK_DESCRIBE      157
#define TK_RESET         158
#define TK_QUERY         159
#define TK_CACHE         160
#define TK_EXPLAIN       161
#define TK_ANALYZE       162
#define TK_VERBOSE       163
#define TK_NK_BOOL       164
#define TK_RATIO         165
#define TK_NK_FLOAT      166
#define TK_COMPACT       167
#define TK_VNODES        168
#define TK_IN            169
#define TK_OUTPUTTYPE    170
#define TK_AGGREGATE     171
#define TK_BUFSIZE       172
#define TK_STREAM        173
#define TK_INTO          174
#define TK_TRIGGER       175
#define TK_AT_ONCE       176
#define TK_WINDOW_CLOSE  177
#define TK_KILL          178
#define TK_CONNECTION    179
#define TK_TRANSACTION   180
#define TK_BALANCE       181
#define TK_VGROUP        182
#define TK_MERGE         183
#define TK_REDISTRIBUTE  184
#define TK_SPLIT         185
#define TK_SYNCDB        186
#define TK_DELETE        187
#define TK_NULL          188
#define TK_NK_QUESTION   189
#define TK_NK_ARROW      190
#define TK_ROWTS         191
#define TK_TBNAME        192
#define TK_QSTARTTS      193
#define TK_QENDTS        194
#define TK_WSTARTTS      195
#define TK_WENDTS        196
#define TK_WDURATION     197
#define TK_CAST          198
#define TK_NOW           199
#define TK_TODAY         200
#define TK_TIMEZONE      201
#define TK_COUNT         202
#define TK_LAST_ROW      203
#define TK_BETWEEN       204
#define TK_IS            205
#define TK_NK_LT         206
#define TK_NK_GT         207
#define TK_NK_LE         208
#define TK_NK_GE         209
#define TK_NK_NE         210
#define TK_MATCH         211
#define TK_NMATCH        212
#define TK_CONTAINS      213
#define TK_JOIN          214
#define TK_INNER         215
#define TK_SELECT        216
#define TK_DISTINCT      217
#define TK_WHERE         218
#define TK_PARTITION     219
#define TK_BY            220
#define TK_SESSION       221
#define TK_STATE_WINDOW  222
#define TK_SLIDING       223
#define TK_FILL          224
#define TK_VALUE         225
#define TK_NONE          226
#define TK_PREV          227
#define TK_LINEAR        228
#define TK_NEXT          229
#define TK_HAVING        230
#define TK_RANGE         231
#define TK_EVERY         232
#define TK_ORDER         233
#define TK_SLIMIT        234
#define TK_SOFFSET       235
#define TK_LIMIT         236
#define TK_OFFSET        237
#define TK_ASC           238
#define TK_NULLS         239
#define TK_ID            240
#define TK_NK_BITNOT     241
#define TK_INSERT        242
#define TK_VALUES        243
#define TK_IMPORT        244
#define TK_NK_SEMI       245
#define TK_FILE          246

#define TK_NK_SPACE   300
#define TK_NK_COMMENT 301
#define TK_NK_ILLEGAL 302
#define TK_NK_HEX     303  // hex number  0x123
#define TK_NK_OCT     304  // oct number
#define TK_NK_BIN     305  // bin format data 0b111

#define TK_NK_NIL 65535

#endif /*_TD_COMMON_TOKEN_H_*/
