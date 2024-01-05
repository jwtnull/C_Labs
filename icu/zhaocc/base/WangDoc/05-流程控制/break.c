#include <stdio.h>
void main()
{
    /**
     * break语句有两种用法。一种是与switch语句配套使用，用来中断某个分支的执行，这种用法前面已经介绍过了。另一种用法是在循环体内部跳出循环，不再进行后面的循环了。
     */

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, %d\n", i, j);
            break;
        }
    }
}