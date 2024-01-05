#include <stdio.h>
void main()
{
    /**
     * goto 语句用于跳到指定的标签名。这会破坏结构化编程，建议不要轻易使用
     */

   char ch;

top: ch = getchar();

if (ch == 'q')
  goto top;
}