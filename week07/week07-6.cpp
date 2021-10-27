///week07 step03-2 比較各種for迴圈

#include <stdio.h>
int main()
{
    int i;

    ///最簡單的基礎型 電腦
    for(i=0;i<4;i++)
        printf("i:%d\n",i);///會跑4次

    ///最簡單的基礎型 人類數數字
    for(i=1;i<=4;i++)
        printf("人類的數法i:%d\n",i);///會跑4次

    for(i=0;i<=4;i++)
        printf("怪怪的..%d\n",i);///怪怪的，可以從基礎型走過來
}

