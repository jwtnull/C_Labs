/*=============================
 * 线性表的顺序存储结构（顺序表）
 *
 =============================*/

#include "SeqList.h"

/**
 * 初始化
 * @param sqlList
 */
SqlList initSqlList() {
    SqlList sqlList;
    sqlList.element = (ElemType *) malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (sqlList.element == NULL) {
        //申请内存失败
        exit(0);
    }
    // 初始化顺序表长度为0
    sqlList.length = 0;
    // 顺序表初始内存分配量
    sqlList.size = LIST_INIT_SIZE;

    return sqlList;
}
