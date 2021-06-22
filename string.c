#include <stdio.h>
char inverte(char string[],int tam)
{
    printf("%c",string[tam]);
    if(tam>=1)
    {
        return inverte(string,tam-1);
    }
}

int main()
{
    char s[4]="rafa";
    inverte(s,3);
}