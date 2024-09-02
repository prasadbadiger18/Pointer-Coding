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

// 1) MALLOC (malloc stores the default garbage values  as address)
    // int n; 
    // printf("enter the size of array :");
    // scanf("%d",&n);
    // int *A=(int*)malloc(n*sizeof(int));
    
    // for(int i=0;i<n;i++)
    // {  
    //     A[i]=i+1;
    // }
    // free(A);                       // Why Do Some Values Appear Correct After free?
    // //                             Memory Content After free: When you call free(A), 
    // //                             the memory is marked as free, but the data (1, 2, 3, 4) 
    // //                             that was stored there is not immediately deleted. The memory 
    // //                             still contains the old values because the system hasn't 
    // //                             assigned that memory block to another process or overwritten it yet.
    // for(int i=0;i<n;i++)
    // {
    //     printf(" %d",A[i]);
    // }
    

// // 1) CALLOC (calloc stores the default values 0 as address)
//     int n; 
//     printf("enter the size of array :");
//     scanf("%d",&n);
//     int *A=(int*)malloc(n*SIZEOF(INT));

//     for(int i=0;i<n;i++)
//     {
//         A[i]=i+1;
//     }

//     for(int i=0;i<n;i++)
//     {
//         printf(" %d",A[i]);
//     }
    

// ----->important thing about pointer
// pointers are very dangerous even though after
//  freeying the array we can modify the value of array

// 3) REALLOC

int n; 
printf("enter the size of array :");
scanf("%d",&n);
int *A=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
 {
 A[i]=i+1;
}
int *B=(int*)realloc(A,2*n*sizeof(int));
for(int i=0;i<n*2;i++)
 {
 printf(" %d",B[i]);
}
}
     