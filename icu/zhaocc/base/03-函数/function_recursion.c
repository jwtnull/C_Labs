#include <stdio.h>
#include <string.h>

long factorial(int);
char *reverse(char*);
void main(void)
{
    //函数递归调用
    // int a;
    // printf("Input a number: ");
    // scanf("%d", &a);
    // printf("Factorial(%d) = %ld\n", a, factorial(a));

    char str[20] = "123456789";
    printf("%s\n", reverse(str));
 
}

//求n的阶乘
long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return factorial(n - 1) * n;  // 递归调用
    }
}

//反转（逆置）字符串
char *reverse(char *str){
    //123456789
    int length=strlen(str);
    if (length > 1) 
    {
     char temp=str[0];
     str[0]=str[length-1];
     str[length-1]='\0';
     //递归调用
     reverse(str+1);
     str[length-1]=temp;

    }
    
     return str; 

}