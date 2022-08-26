#include<stdio.h>
int main(void)

{
    char ch;
    printf("enter any letter ");
    scanf("%c",&ch);

    if (ch>='a'&& ch<='z')
        printf("small letter");
    else if(ch>='A' &&ch<='Z')
     printf("capital letter");
     else printf("invalid");
}
