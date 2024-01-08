#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 定义指针变量
    int *pointer1;
    int *pointer2;
    int *pointer3, *pointer4;
    float *pointer5;


    //初始化
    int* pointer_init1;
    int num =2;
    // &运算符用来取出一个变量所在的内存地址
    pointer_init1=&num;

    //NULL 是一个常量标识地址为0的空间
    int* pointer_init2=NULL;

    //获取指针的值
    printf("pointer_init1=%d\n",*pointer_init1);

    return 0;
}
