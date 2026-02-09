#include <stdio.h>
//function prototype
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 

//or void swapArray(int *a, int *b, int size); 

int main() {
int x[4] = {1, 2, 3, 4};
int y[4] = {5, 6, 7, 8};
int i;
printf("Before swapArray:\n");
for (i = 0; i < 4; i++)
    printf("x[%d]=%d  y[%d]=%d\n",i,x[i],i,y[i]);
swapArray(x,y,4);
printf("After swapArray:\n");
for (i = 0; i < 4; i++)
    printf("x[%d]=%d  y[%d]=%d\n",i,x[i],i,y[i]);
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

