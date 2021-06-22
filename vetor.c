#include <stdio.h>
int busca(int valor,int vetor[],int i,int tam)
{
    if(vetor[i] == valor)
    {
        return i;
    }
    else
    {   if(i<tam)
        { 
            return busca(valor,vetor,i+1,tam);
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int vetor[5] = {1,5,3,2,5};
    int tam = sizeof(vetor)/sizeof(vetor)[0];
    printf("%d",busca(10,vetor,0,tam));
    
}