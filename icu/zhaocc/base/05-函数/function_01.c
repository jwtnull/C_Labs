#include <stdio.h>
// 函数声明
int sum(int a, int b); // 也可以写作int sum(int, int);
void main(void)
{
    int start=1;
    int end =2;
    int result=sum(start,end);
    printf("result=%d",result);
}

// 函数定义
int sum(int a, int b)
{
    int result = 0;
    for (int i = a; i <= b; i++)
    {
        result += i;
    }
    return result;
}