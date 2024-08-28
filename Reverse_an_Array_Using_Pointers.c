// Reverse an Array Using Pointers

// Input: int arr[] = {10, 20, 30, 40}
// Output: 40 30 20 10

// #include<stdio.h>
// int main()
// {
//    int arr[] = {10, 20, 30, 40};
//    int size=sizeof(arr)/sizeof(int);
//    int *p;
//    p=arr;

//    for(int i=size-1;i>=0;i--)
//    {
//        printf("\n%d",*(p+i));
//    }
// }

#include<stdio.h>
int main()
{              //200 204 208 212
    int arr[] = {10, 20, 30, 40};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *start=arr;
    int *end=arr+size-1;// 200+(4-1)

    while(start<end)//200<212 //208<204 false
    {
        int temp=*start;//10 //20
        *start=*end;//40 //30
        *end=temp;//10 //20

        start++;//204 //208
        end--;//208 //204
    }

    for(int i=0;i<size;i++)
    {
        printf(" %d",arr[i]); //40 30 20 10
    }
}