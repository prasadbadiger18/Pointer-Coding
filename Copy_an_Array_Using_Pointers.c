// Copy an Array Using Pointers

// Input: int arr[] = {7, 14, 21}
// Output: 7 14 21

#include<stdio.h>
int main()
{
    int arr[] = {7, 14, 21};
    int size=sizeof(arr)/sizeof(arr[0]);
    int copy[size];
    int *src=arr;
    int *dest=copy;

    for(int i=0;i<size;i++)
    {
        *(dest+i)=*(src+i);
    }

    for(int i=0;i<size;i++)
    {
        printf(" %d",copy[i]);
    }
}