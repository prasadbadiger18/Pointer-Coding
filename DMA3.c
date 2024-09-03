// Problem 3: Reverse Array
// Write a C program to dynamically allocate memory for an array of integers and print the elements of the array in reverse order.

// Steps:
// Ask the user for the size of the array (n).
// Dynamically allocate memory for an array of size n.
// Read n integers from the user and store them in the array.
// Print the elements of the array in reverse order.
// Free the allocated memory.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);

    int *A=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    int *start=A;
    int *End=A+n-1;

    while(start<End){
        int temp=*start;
        *start=*End;
        *End=temp;

        start++;
        End--;
    }

  for(int i=0;i<n;i++)
    {
        printf(" %d",A[i]);
    }
}