// Find the Maximum Element in an Array Using Pointers

// Input: int arr[] = {3, 6, 2, 9, 5}
// Output: 9

#include<stdio.h>

int maxNUM(int *arr,int size)
{
    int *ptr=arr;
    int max=*ptr;

    for(int i=1;i<size;i++)
    {
        ptr++;
        if(*ptr>max)
        {
            max=*ptr;
        }
    }
    return max;
}

int main()
{
    int arr[] = {3, 6, 2, 9, 5};
    int size=sizeof(arr)/sizeof(int);

    int maximum = maxNUM(arr,size);
    printf("%d",maximum);

}