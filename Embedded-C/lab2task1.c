#include <stdio.h>
#include <stdlib.h>

//even numbers within a range

int main()
{
    int x , y ;
    printf("enter the  two numbers");
    scanf("%d",&x);
    scanf("%d",&y);
    if ( x%2!=0)
    {
        x++;
    }
    else
        { x=x+2;}
    while (x<y)
    {  printf("%d\n",x);
        x=x+2;
    }
    return 0;
}
