#include <stdio.h>
int main(void)
{

    /**
     * scanf()：和 printf() 类似，scanf() 可以输入多种类型的数据。
        getchar()、getche()、getch()：这三个函数都用于输入单个字符。
        gets()：获取一行数据，并作为字符串处理。
     *
    */
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    printf("a+b=%d\n", a + b);
    scanf("%d %d", &c, &d);
    printf("c*d=%d\n", c * d);

    //输出地址
    printf("&a=%p,&b=%p,&c=%p,&d=%p",&a,&b,&c,&d);
    return 0;
}