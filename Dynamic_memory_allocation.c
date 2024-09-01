#include<stdio.h>
int main()
{
    // void *p=malloc(4);
    // printf("%d",p);

    int *ptr=malloc(3*sizeof(int)); // In C, typecasting "(int *ptr=(int*)malloc(3*sizeof(int));)" the result of malloc is not necessary, but it is sometimes 
                                        // seen in code. Let's go over why this is the case and the reasoning behind typecasting 
                                           // (or not typecasting) the result of malloc.          
    *ptr=100;
    printf("\n%d",*ptr);
    printf("\n%d",ptr);

//Understanding malloc and Its Return Type   
//    malloc returns a pointer of type void *, which is a generic pointer type in C. 
//    A void * pointer can be assigned to any other pointer type without needing an explicit cast.

// Why Typecasting Is Not Necessary in C
// In C, typecasting the return value of malloc is not required because 
// a void * can be implicitly converted to any other pointer type. This is part of the C standard 
// and is handled automatically by the compiler. For example:


// int *ptr = malloc(10 * sizeof(int));

// Why Do Some People Typecast malloc?
// Some C programmers typecast the return value of malloc, like this:

// c code
// int *ptr = (int *)malloc(10 * sizeof(int));

// There are a few reasons why you might see this:

// Code Portability with C++: In C++, implicit conversion from void * to another pointer
//  type is not allowed. If you include C code inside a C++ program, you might need to cast the 
//  return of malloc to the appropriate type to prevent compilation errors. The cast makes the code
//  valid in both C and C++:

 
}