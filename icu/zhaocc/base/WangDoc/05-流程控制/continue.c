#include <stdio.h>
void main()
{
    /**
     * continue语句用于在循环体内部终止本轮循环，进入下一轮循环。只要遇到continue语句，循环体内部后面的语句就不执行了，回到循环体的头部，开始执行下一轮循环。
     */

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, %d\n", i, j);
            continue;
        }
    }
}