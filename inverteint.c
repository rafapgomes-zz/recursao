
#include <stdio.h>
int inverte (int n)
{
    if(n<10)
    {
        return n;
    }
    printf("%d",n%10);
    n = n - n%10;
    return inverte(n/10);    
}


int main()
{
    printf("%d",inverte(7659898));
}