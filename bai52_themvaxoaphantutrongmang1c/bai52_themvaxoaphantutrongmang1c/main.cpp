//
//  main.cpp
//  bai52_themvaxoaphantutrongmang1c
//
//  Created by Nguyen Dinh Huong on 03/07/2021.
//

#include <iostream>

void nhap(int a[],int n){
    do {
        if (n<0){
            printf("Nhap lai n ");
        }
    } while (n<0);
    
    for (int i=0;i<n;i++){
        printf("\nNhap phan tu thu %d = ",i);scanf("%d",&a[i]);
    }
}
void xuat(int a[],int n){
    for (int i=0;i<n;i++){
        printf("\nA[%d] = %d",i,a[i]);
    }
}
void add(int a[],int &n,int val, int pos){
    if (pos<0){
        pos = 0;
    } else if (pos>n){
        pos = n;
    }
    
    for (int i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=val;
    ++n;
}
void delete1(int a[],int &n,int pos){
    if (pos<0){
        pos = 0;
    } else if(pos>=n){
        pos = n;
    }
    
    for (int i=n;i<n-1;i++){
        a[i]=a[i+1];
    }
    --n;
}

int main(){
    int n,a[50],p,v,d;
    printf("Nhap n = ");scanf("%d",&n);
    nhap(a, n);
    xuat(a, n);
    printf("\nnhap vi tri can them vao : ");scanf("%d",&p);
    printf("\nnhap gia tri can them vao : ");scanf("%d",&v);
    add(a,n,v,p);
    printf("\nMang sau khi them ");
    xuat(a, n);
    printf("\nnhap vi tri can xoa : ");scanf("%d",&d);
    delete1(a, n,d);
    printf("\nMang sau khi xoa ");
    xuat(a, n);
}
