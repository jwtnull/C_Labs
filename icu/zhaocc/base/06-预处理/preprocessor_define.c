#include <stdio.h>

#define SIZE 109
#define ADD SIZE + SIZE
#define HELLO "Hello,World!"
#define OW "C programming language is invented \
in 1970s."

#define STR(s) #s
#define XNAME(n) "x" #n

#define MK_ID(n) i##n
//不确定参数宏
#define X(a,b,...) (10*(a) + 20*(b)),__VA_ARGS__

int main()
{
    int sum = 20 + SIZE;
    printf("%d\n", sum);
    printf("%s\n", HELLO);
    printf("%s\n", OW);
    printf("%d\n", ADD);

    printf("%s\n", STR(3.1415926));
    // 输出 x4
    printf("%s\n", XNAME(4));

    // 替换成: i1, i2, i3;
    int  MK_ID(1), MK_ID(2), MK_ID(3);
    // int id = MK_ID(1);
    // printf("%d\n", id);
    printf("%d",i1);


    return 0;
}