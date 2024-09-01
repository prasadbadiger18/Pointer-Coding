#include<stdio.h>
#include<stdlib.h>
int main()
{
    //program will not allow us to provide run time size of array or it is 
    //okay with smaller size so instead we can use DMA

    //  int n;
    //  printf("enter the size of array :");
    //  scanf("%d",&n);
    //  int A[n];

// 1) MALLOC
//     int n; 
//     printf("enter the size of array :");
//     scanf("%d",&n);
//     int *A=malloc(n);

//     for(int i=0;i<n;i++)
//     {
//         A[i]=i+1;
//     }

//     for(int i=0;i<n;i++)
//     {
//         printf(" %d",A[i]);
//     }

// 1) CALLOC
    int n; 
    printf("enter the size of array :");
    scanf("%d",&n);
    int *A=(int*)malloc(n);

    for(int i=0;i<n;i++)
    {
        A[i]=i+1;
    }

     free(A);
   
    for(int i=0;i<n;i++)
    {
        printf(" %d",A[i]);
    }
}
     