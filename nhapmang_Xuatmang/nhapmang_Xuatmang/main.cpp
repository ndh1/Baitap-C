//
//  main.cpp
//  nhapmang_Xuatmang
//
//  Created by Nguyen Dinh Huong on 29/06/2021.
//

#include <iostream>

void nhapmang(int a[],int &n){
    printf("Nhap n = ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("phan tu thu [%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void xuatmang(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
}

void sapxep(int a[],int n){
    printf("Sap xep mang");
    int i,j,tam;
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if (a[i] > a[j]){
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
                
            }
        }
    }
    for (i=0;i<n;i++){
        printf("%d",a[i]);}
}


int main(){
    int a[50],n;
    nhapmang(a, n);
    xuatmang(a,n);
    sapxep(a, n);
}
