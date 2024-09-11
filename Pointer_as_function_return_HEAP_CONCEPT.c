// IMPORTANT HEAP CONCEPT IS THERE
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