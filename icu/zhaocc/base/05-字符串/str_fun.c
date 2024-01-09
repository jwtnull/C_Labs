#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "Hello,World!";
    // 获取字符串长度 不包含\0
    int length = strlen(str);
    printf("str length=%d\n",length);
    printf("str sizeof=%d\n",sizeof(str));//包含\0的长度


    //字符串复制 strcpy()
    char newStr[length+1];
    strcpy(newStr,str);
    int newLength = strlen(newStr);
    printf("newStr length=%d\n",newLength);

    //字符串复制 strncpy() 如果str长度小于length效果和strcpy()一样 如果大于length 那边复制长度到length会停止 后面不回有\0需要手动添加
    char newStr2[length+1];
    strncpy(newStr2,str,length);
    printf("newStr2 length=%d\n",strlen(newStr2));


    //字符串拼接 strcat() s1的长度必须能够容纳s1+s2  不推荐使用
    char s1[12]="hello";
    char s2[6]="world";
    strcat(s1,s2);
    printf("s1=%s\n",s1);

    //字符串拼接 strncat() 推荐使用
    char s3[10] = "Monday";
    char s4[8] = "Tuesday";
    strncat(s3, s4, 3);
    puts(s3); // "MondayTue"
    return 0;
}