#include <stdio.h>
#include <math.h>

int binarioparainteiro (int n)
{
    double s=0;
    int i=0;

    while (n>=10)
    {
        if(n%10 == 1)
            s = s + pow(2,i);
        i++;
        n=n/10;
    }

    if(n)
        s = s + pow(2,i);

    return s;
}

int main()
{
    printf("%d", binarioparainteiro(1011));
}
