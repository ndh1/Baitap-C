//
//  main.cpp
//  bai41_mang1chieu
//
//  Created by Nguyen Dinh Huong on 01/07/2021.
//

#include <iostream>

void nhapmang(int a[],int n){

    for (int i=0;i<n;i++){
        printf("Nhap arr[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void xuatmang(int a[],int n){
    printf("Mang vua nhap la ");
    for (int i=0;i<n;i++){
        printf("A[%d] = %d",i,a[i]);
    }
}

int main(){
    int n;
    printf("Nhap n = ");scanf("%d",&n);
    int a[50];
    nhapmang(a, n);
    xuatmang(a, n);
}
