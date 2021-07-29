//
//  main.cpp
//  timminmang
//
//  Created by Nguyen Dinh Huong on 30/06/2021.
//

#include <iostream>

void nhapmang(int a[],int &n){
    printf("Nhap n = ");scanf("%d",&n);
    
    do {
        if (n<1)
        {
            printf("Nhap lai n = ");scanf("%d",&n);
        }
    } while (n<1);
    
    for (int i=0;i<n;i++){
        printf("Nhap phan tu thu %d trong mang = \n",i);
        scanf("%d",&a[i]);
    }
}

void xuatmang(int a[],int n){
    for (int i=0;i<n;i++){
        printf("A[%d] = %d ",i,a[i]);
    }
}
void minmang(int a[],int n){
    int min;
    min = a[0];
    for (int i=0;i<n;i++){
        if (a[i]>a[i+1]){
            min = a[i+1];
        }
    }
    printf("Min = %d",min);
}

int main(){
    int a[100],n;
    nhapmang(a, n);
    xuatmang(a, n);
    minmang(a, n);
}

