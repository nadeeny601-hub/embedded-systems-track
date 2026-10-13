#include <stdio.h>
#include <stdlib.h>
//sorting by ascending order
int main()
{
    printf("Hello world!\n");

    int arr [10];
    for (int i=0 ; i< 10;i++)
    {
        scanf("%d",&arr[i]);

    }
    for ( int i =0;i< 10 ;i++)
    {
        for ( int j = 0 ; j < 9 ; j++)
        {





            if (arr[j]>arr[j+1] )
                { int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; } }}




     for (int i=0 ; i<10; i++ )
    {


       printf( "%d",arr[i]); }


    return 0;
 }
