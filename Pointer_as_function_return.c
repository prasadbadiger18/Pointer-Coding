// #include<stdio.h>
// int add(int* a,int* b)
// {
//     printf("\naddress of a in add : %d",&a);
//     printf("\nvalue in a of add (address of a of main) : %d",a);
//     printf("\nvalue at address stored in a of add : %d",*a);
//     int c=(*a)+(*b);
//     return c;
// }

// int main()
// {
//       int a=6,b=4;
//       printf("address of a in main : %d",&a);
//       int z=add(&a,&b);
// //       printf("%d",z);
// }

// #include<stdio.h>
// int *add(int* a,int* b)
// {
//     int c=(*a)+(*b);
//     return &c;
// }
// // In the function add(), the variable c is a local variable, 
// // meaning it is stored on the stack. When the function add() returns, 
// // the memory allocated for c is released, and the pointer returned by add() (&c) 
// // will point to a location that is no longer valid. This is called returning a pointer
// // to a local variable, which is dangerous and leads to undefined behavior.

// // What will happen:
// // The program might crash.
// // It may print some garbage value, or it may appear to work, but this is purely accidental.
// // Example Output:
// // The output might print some random or incorrect value instead of 10, which is
// //  the expected sum of 6 and 4.
// int main()
// {
//       int a=6,b=4;
//       int *ptr=add(&a,&b);
//       printf("%d",*ptr);
// }

//IMPORTANT HEAP CONCEPT IS THERE
//POINTER AS FUNCTION RETURN
#include<stdio.h>
int *add(int* a,int* b)
{
    int* c=(int*)malloc(sizeof(int));
    *c=*a+*b;
    return c;
}
void print()
{
    printf("hello word!");
}

int main()
{
      int a=6,b=4;
      print();
      int *ptr=add(&a,&b);
      printf("%d",*ptr);
}