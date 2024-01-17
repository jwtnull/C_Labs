#include <stdio.h>
#include <stdlib.h>
int main()
{

    // 此时该块内存只能由p指针访问
    int* restrict p;
    p = malloc(sizeof(int));

    int *q = p;
    // 未定义行为
    *p = 0;

    return 0;
}