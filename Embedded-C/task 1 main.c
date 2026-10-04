#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   float x1;
    float y1;
    float x2;
    float y2;
    float distance ;
    printf("enter first point\n");
    scanf ("%f %f",&x1,&y1);
    printf("enter second point\n");
    scanf ("%f %f",&x2,&y2);

    distance = sqrt (pow(x1-x2,2)+ pow (y1-y2,2)) ;


 printf("distance equals %f",distance);
    return 0;
}
