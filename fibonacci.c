#include <stdio.h>

int fiborecur(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
    {
        return fiborecur(n-1)+fiborecur(n-2);
    }
}
int main()
{
    printf("%d",fiborecur(5));
}