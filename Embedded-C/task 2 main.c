#include <stdio.h>
#include <stdlib.h>

int main()
{ int x1,x2;
    printf("enter the two numbers :");
    scanf("%d %d",&x1,&x2);
    if (x1%x2 ==0 || x2 %x1 ==0 )
    printf(" they are multiplied");
    else
    printf("they are not multiplied");


    return 0;
}
