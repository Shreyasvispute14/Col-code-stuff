#include<stdio.h>
#include<stdlib.h>
void main(){
    char str[100];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;
    printf("\n\nCount total number of alphabets, digits and special characters :\n");
    printf("--------------------------------------------------------------------\n");
    printf("Input the string:");
    gets(str);

    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else 
        {
            splch++;
        }
        i++;
    }
    printf("Number of Alphabets in the string is :%d\n",alp);
    printf("Number of Digits in the string is :%d\n",digit);
    printf("Number of Specical characters in the id :%d\n",splch);

}