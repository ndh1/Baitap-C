//
//  main.cpp
//  Gop2mang
//
//  Created by Nguyen Dinh Huong on 29/06/2021.
//

#include <iostream>

using namespace std;

void nhapmang(int a[],int &n){
    printf("Nhap n = ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("\n phan tu thu [%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void xuatmang(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d " ,a[i]);
    }
}

void gopmang(int a[],int b[],int c[],int n, int m, int &p){
    p=n+m;
    for(int i=0;i<p;i++){
        if (i<n){
            c[i]=a[i];
        }else {
            c[i]=b[i-n];
        }
    }
}

int main(){
    int a[50],b[50],c[100],n,m,p;
    nhapmang(a, n);
    nhapmang(b, m);
    gopmang(a, b, c, n, m, p);
    xuatmang(c, p);
    
}
