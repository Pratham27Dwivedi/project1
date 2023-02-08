#include<stdio.h>

int main(){

    int arr[5] = {1,2,3,4,5};
    int n =10,i,j,k;
    int *ptr[5] ;
    ptr[0] = &n;
    printf("%d",*ptr[0]);
    }