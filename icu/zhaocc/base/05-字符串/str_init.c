#include <stdio.h>
int main()
{
    // 初始化
    char str1[] = {'H', 'e', 'l', 'l', 'o', ',', 'W', 'o', 'r', 'l', 'd', '\0'};
    char str2[] = {"Hello,World"};
    // 或
    // 推荐使用 c语言自动添加\0
    char str3[] = "Hello,World";
    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);
    printf("str3=%s\n", str3);
    printf("%s\n", "hello world");

    return 0;
}