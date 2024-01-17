#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   /**
    * 获取环境变量
    * 
    * getenv("HOME")用来获取命令行的环境变量$HOME
   */
  char* val= getenv("HOME");
  if (val==NULL)
  {
     printf("Cannot find the HOME environment variable\n");
    return 1;
  }
   printf("Value: %s\n", val);

    return 0;
}