#include <stdio.h>
int main(int argc, char *argv[])
{
    /**
     * main()函数解析:
     * 第一种：main()
     * 第二种：main(int argc,char *argv[]): argc 表示传递的字符串的数目，argv 是一个指针数组，每个指针指向一个字符串（一份数据）
     */

    printf("The program receives %d parameters:\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    /**
     * 命令输入:
     * gcc command_main.c -o command_main   
     * ./command_main hello world
     * 
     * 输出：
     * The program receives 3 parameters:
        ./command_main
        hello
        world
    */

    return 0;
}