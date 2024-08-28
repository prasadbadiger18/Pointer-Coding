// Reverse an Array Using Pointers

// Input: int arr[] = {10, 20, 30, 40}
// Output: 40 30 20 10

#include<stdio.h>
int main()
{
   int arr[] = {10, 20, 30, 40};
   int size=sizeof(arr)/sizeof(int);
   int *p;
   p=arr;

   for(int i=size-1;i>=0;i--)
   {
       printf("\n%d",*(p+i));
   }
}