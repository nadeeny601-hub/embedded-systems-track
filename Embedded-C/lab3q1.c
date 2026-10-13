#include <stdio.h>
#include <stdlib.h>
//array in reverse order

int main()
{
    int n;
    printf("enter the required number\n");
    scanf("%d",&n);
    int arr[n];
    for (int i =0 ; i <n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for ( int j =n-1 ; j >= 0 ; j--)
    {  printf ("%d\n", arr[j]);;


    }
    return 0;
}
