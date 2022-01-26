#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, sum=0;

    a=1;
    do
    {
        if(a%2==0)
        {
            sum=sum+a;
        }
        a++;
    }
    while(a<=100);

    printf("2+4+6+8+............+100 = %d",sum);



    getch();
    return 0;
}
