#include <stdio.h>
int main(void){
  
  //变量定义
    short short_type=20;
    int int_type=10;
    long long_type=30;
    printf("short_type=%hd,int_type=%d,long_type=%ld \n",short_type,int_type,long_type);


    //变量长度
    short short_size=sizeof(short);//mac 2
    int int_size=sizeof(int); //mac 4
    long long_size=sizeof(long); //mac 8

    printf("short_size=%d,int_size=%d,long_size=%ld \n",short_size,int_size,long_size);



    //不同进制的表示 二进制、八进制、十进制、十六进制

    //二进制：二进制由 0 和 1 两个数字组成，使用时必须以0b或0B（不区分大小写）开头 不是所有编译器支持
    //正确写法
    int two_binary_success_1 =0b1010;
    int two_binary_success_2=0B0101;
    // 错误写法
    int two_binary_fail_1=101010;//无前缀 0B，相当于十进制
    // int two_binary_fail_2=0B0201; //2不是有效的二进制数字

    //八进制 八进制由 0~7 八个数字组成，使用时必须以0开头（注意是数字 0，不是字母 o）
    //正确写法
    int eight_binary_success_1 =01210;
    int eight_binary_success_2=024151;
    //错误写法
    int eight_binary_fail_1 =567;//无前缀 相当于十进制
    // int eight_binary_fail_2=024151b; //b不是有效的八进制

    //十进制 略

    //十六进制 十六进制由数字 0~9、字母 A~F 或 a~f（不区分大小写）组成，使用时必须以0x或0X（不区分大小写）
    //正确写法
    int sixteen_binary_success_1 =0x1210;
    int sixteen_binary_success_2=0X24151;
    //错误写法
    int sixteen_binary_fail_1 =567;//无前缀 相当于十进制
    // int eight_binary_fail_2=024151H; //H不是有效的八进制

    
    //以不同的进制输出 
    /**
     * 	short	int	long
    八进制	%ho	%o	%lo
    十进制	%hd	%d	%ld
    十六进制	%hx 或者 %hX	%x 或者 %X	%lx 或者 %lX
     * 
    */

    short num_1 = 0b1010110;  //二进制数字
    int num_2 = 02713;  //八进制数字
    long num_3 = 0X1DAB83;  //十六进制数字

    printf("八进制格式输出：num_1=%#ho,num_2=%#o,num_3=%#lo\n",num_1,num_2,num_3);//八进制
    printf("十进制格式输出：num_1=%hd,num_2=%d,num_3=%ld\n",num_1,num_2,num_3);//十进制
    printf("十六进制格式输出：num_1=%#hx,num_2=%#x,num_3=%#lx\n",num_1,num_2,num_3);//十六进制(字母小写)
    printf("十六进制格式输出：num_1=%#hX,num_2=%#X,num_3=%#lX\n",num_1,num_2,num_3);//十六进制(字母大写)


    //正负数(有符号 /无符号)  
    //有符号  
    //负数
    short n1=-1;

    //正数
    int  n2=10;

    //无符号
    unsigned int n3=10;

    //无符号输出：
    /**
     *  	unsigned short	unsigned int	unsigned long
       八进制	     % ho	           %o	        %lo
       十进制	      %hu	           %u	         %lu
       十六进制	%hx 或者 %hX	%x 或者 %X	%lx 或者 %lX
     * 
     * **/


    return 0;

}
