// Write a C program to dynamically allocate memory for an array of integers. Read n integers from the user, 
// store them in the array, and then calculate and print the sum of the elements.

// Steps:

// Ask the user for the size of the array (n).
// Dynamically allocate memory for an array of size n.
// Read n integers from the user and store them in the array.
// Calculate the sum of the integers in the array.
// Print the sum.
// Free the allocated memory

// Example:
// Enter the size of the array: 5
// Enter 5 integers: 1 2 3 4 5
// Sum of the array elements: 15

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *A=malloc(n*sizeof(int));
    float sum=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter integers : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+*A;
        A++;
    }

    float avg=sum/n;
    printf("%.1f",avg);
    
}
