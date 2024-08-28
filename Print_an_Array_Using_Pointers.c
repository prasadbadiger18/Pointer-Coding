// Print an Array Using Pointers

// Input: int arr[] = {1, 2, 3, 4, 5}
// Output: 1 2 3 4 5

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int *p;
    int size=sizeof(arr)/sizeof(int);
    p=arr;

    for(int i=0;i<size;i++)
    {
        printf("\n%d",*(p+i));
    }
}