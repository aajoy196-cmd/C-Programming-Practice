#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];
    scanf("%[^\n]s", str1);

    int len=strlen(str1),i,j;

    for(j=0,i = len-1; i>=0; i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    int d = strcmp(str1,str2);

    printf("Str1 = %s\n", str1);
    printf("Str2 = %s\n", str2);

    if(d==0)
        printf("String is Palindrome\n");
    else
        printf("String is not Palindrome\n");


    return 0;
}

