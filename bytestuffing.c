//byte stuffing
#include <stdio.h>
#include<string.h>

int main()
{
    char bit[50];
    char stuff[50];
    int count=0;
    int i=0,j=0;

    printf("input data:");
    scanf("%s",bit);
    stuff[j++]='$';

    for(i=0;i<strlen(bit);i++){
        if(bit[i]=='#' || bit[i]=='$')
        stuff[j++]='#';
        stuff[j++]=bit[i];
    }

    stuff[j++]='$';
    stuff[j]='\0';

    printf("Bit array:");
    printf("%s\r\n",bit);

    printf("stuff array:");
    printf("%s\r\n",stuff);

    return 0;
}