#include <stdio.h>
void main()
{
    /**
     * do...while结构是while的变体，它会先执行一次循环体，然后再判断是否满足条件。如果满足的话，就继续执行循环体，否则跳出循环。
     * do statement
while (expression);

不管条件expression是否成立，循环体statement至少会执行一次。每次statement执行完毕，就会判断一次expression，决定是否结束循环


    */
   int num =0;
   do
   {
   puts("do while");
   } while (num);
   
    
}