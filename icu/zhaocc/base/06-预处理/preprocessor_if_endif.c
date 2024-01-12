#include <stdio.h>

#define FOOD 1

int main()
{
/**
 * #if...#endif指令用于预处理器的条件判断，满足条件时，内部的行会被编译，否则就被编译器忽略。
 */
#if 0
  const double pi = 3.1415; // 不会执行
#endif

#if FOOD
    printf("defined\n");
#else
    printf("not defined\n");
#endif

    return 0;
}