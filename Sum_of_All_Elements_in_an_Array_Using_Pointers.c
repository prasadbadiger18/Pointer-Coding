// Sum of All Elements in an Array Using Pointers

// Input: int arr[] = {5, 10, 15}
// Output: 30

#include<stdio.h>
int main()
{
    int arr[] = {5, 10, 15};
    int size=sizeof(arr)/sizeof(arr[0]);

    int *next=arr;
    int sum=0;

    for(int i=0;i<size;i++)
    {
        sum=sum+*(next+i);
    }
    printf(" %d",sum);
}