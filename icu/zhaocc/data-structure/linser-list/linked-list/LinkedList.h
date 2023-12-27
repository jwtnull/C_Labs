/*=============================
 * 线性表的顺序存储结构（顺序表）
 *
 =============================*/

#ifndef SQLIST_H
#define SQLIST_H

#include <stdlib.h>

/* 宏定义 */
#define LIST_INIT_SIZE 100  // 顺序表存储空间的初始分配量
#define LISTI_NCREMENT  10   // 顺序表存储空间的分配增量

/* 顺序表元素类型定义 */
typedef int ElemType;

typedef struct {
    int *element;
    int length;
    int size;
} SqlList;

/**
 *  初始化：
 * 初始化顺序表
 * @param sqlList
 */
SqlList initSqlList();

/**
 *  销毁：
 *  释放所占内存
 * @param sqlList
 */
void DestroyList(SqlList *sqlList);

/**
 *
 */
void add(SqlList *sqlList, int index, int element);

void update(SqlList *sqlList, int element);

void delete(SqlList *sqlList, int index);

#endif
