#include<stdio.h>
int main(void)

{
    char ch;
    printf("enter any letter");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'|| ch=='E'|| ch=='I'|| ch=='O')
        printf("vowel");
    else
        printf("consonent");

    return 0;
}
