// Problem 2: Find Maximum Element
// Write a C program to dynamically allocate memory for an array of integers and find the maximum element in the array.

// Steps:

// Ask the user for the size of the array (n).
// Dynamically allocate memory for an array of size n.
// Read n integers from the user and store them in the array.
// Find and print the maximum element in the array

// Free the allocated memory.
// Example:

// Enter the size of the array: 4
// Enter 4 integers: 10 22 5 15
// Maximum element: 22

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
    int start=*A;
    int max=*A;

    for(int i=1;i<n;i++)
    {
        A++;
        if(*A>max)
        {
            max=*A;
        }
    }
    printf("\n%d",max);
}