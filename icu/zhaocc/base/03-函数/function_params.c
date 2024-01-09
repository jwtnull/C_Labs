#include <stdio.h>

int sum(int a, int b)
{
    a = 2;
    return a + b;
}

void main(void)
{
    /**
     * 参数的传值引用：
     * 如果函数的参数是一个变量，那么调用时，传入的是这个变量的值的拷贝，而不是变量本身。
    */
    int a = 1, b = 2, c = 0;
    c = sum(1, 2);
    //sum函数中修改了a的值为2 打印实际还是1
    printf("a=%d\n", a);
    printf("c=%d\n", c);
}