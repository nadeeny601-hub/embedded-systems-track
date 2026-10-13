#include <stdio.h>
#include <stdlib.h>
//copy an array

int main()
{
    int n ;
    printf("enter the size of the array\n ");
    scanf("%d",&n);
    int arr1[n];

    for (int i =0 ;i<n ; i++)
    { scanf("%d",&arr1[i]);
    }
    int arr2[n];
    for (int j =0 ; j<n ; j++)
    {
        arr2[j]=arr1[j];

    printf ("%d\n",arr2[j]);
    }


    return 0;
}
