#include <stdio.h>
//function prototype
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 
//or void swapArray(int *a, int *b, int size); 

int main() {
int a = 1, b = 2, c = 3;
printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
swapValue(&a,&b,&c);
printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
//calling swapArray()
int x[3] = {1,2,3};
    int y[3] = {4,5,6};
    int i;
    swapArray(x,y,3);
    printf("After swapArray:\n");
    for (i=0;i<3;i++)
        printf("x[%d]=%d y[%d]=%d\n",i,x[i],i,y[i]);
    return 0;
}
void swapValue(int *a,int *b,int *c) {
    int temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
}
void swapArray(int a[],int b[],int size) {
    int i,temp;
    for (i=0;i<size;i++) {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}

