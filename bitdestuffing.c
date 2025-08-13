//bit destuffing
#include<stdio.h>
#include<string.h>

int main(){
    char bit[50],destuff[50];
    int count=0,i=0,j=0;
    printf("enter the bit sequence");
    scanf("%s",bit);

    for(i=0;i<strlen(bit);i++){
        if(bit[i]=='0')
        count=0;
        else if(bit[i]=='1')
            count++;
            destuff[j++]=bit[i];

        
        if(count==5){
            destuff[i++]='1';
            count=0;
        }
    }
    destuff[j]='\0';
    printf("bit array");
    printf("%s\r\n",bit);

    printf("stuffed array");
    printf("%s\r\n",destuff);

    return 0;
}
