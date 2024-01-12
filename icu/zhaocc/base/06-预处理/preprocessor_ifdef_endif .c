#include <stdio.h>

#define FOOD 1

int main()
{
/**
 * #ifdef...#endif指令用于判断某个宏是否定义过。
 */


#ifdef FOOD
    printf("defined\n");
#else
    printf("not defined\n");
#endif

    return 0;
}