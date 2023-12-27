#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    // void* malloc(size_t size)
    // 返回一个void类型的指针 可以和其它类型的指针互转
    // 接受分类类型的大小
    // 可能存在失败：失败返回NULL

    int *p = malloc(sizeof(int));
    // 等价
    // int *p = (int *)malloc(sizeof(int));
    if (p == NULL)
    {
        puts("分配失败");
    }
    *p = 12;
    printf("%d\n", *p); // 12
}