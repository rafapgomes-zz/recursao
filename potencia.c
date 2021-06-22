#include <stdio.h>
int potencia (int n,int cont)
{
    if(cont>1)
    {
       return n*potencia(n,cont-1);
    }
    else
    {
        return n;
    }
}

int main()
{
    printf("%d",potencia(2,3));
}