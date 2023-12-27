#include <stdio.h>
#include <stdlib.h>
void main()
{
    // void free(void* block) 释放内存

    int *monery = malloc(sizeof(int));
    if (monery == NULL)
    {
        puts("分配内存失败");
    }

    *monery = 12;
    // 释放内存
    free(monery);
}