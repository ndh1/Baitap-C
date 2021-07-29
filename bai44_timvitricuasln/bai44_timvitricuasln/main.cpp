//
//  main.cpp
//  bai44_timvitricuasln
//
//  Created by Nguyen Dinh Huong on 01/07/2021.
//

#include <iostream>

void nhapmang(int a[],int n){
    do {
        if (n<0)
        printf("\nNhap lai n = ");
    } while (n<0);
    
    for (int i=0;i<n;i++){
        printf("A[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[], int n){
    for (int i=0;i<n;i++){
        printf("\na[%d]= %d",i,a[i]);
    }
}
int max(int a[],int n)
{
    int sln;
    sln=a[0];
    for(int i=0;i<n;i++){
        if (a[i]>sln){
            sln=a[i];
        }
    }

    return sln;
}

void pmax(int a[],int n){
    int pmax=max(a, n);
    
    for (int i=0;i<n;i++){
        if (a[i]==pmax){
            printf("\nvi tri so lon nhat = %d",i+1);
        }
    }
}

int min(int a[],int n){
    int snn=a[0];
    for (int i=0;i<n;i++){
        if (a[i]<snn){
            snn=a[i];
        }
    }
    return snn;
}

void pmin(int a[],int n){
    int pmin=min(a, n);
    for (int i=0;i<n;i++){
        if (a[i]==pmin){
            printf("\nvi tri so nho nhat = %d",i+1);
        }
    }
}

int main(){
    int n;
    printf("Nhap n = ");scanf("%d",&n);
    int a[50];
    nhapmang(a, n);
    xuatmang(a, n);
    max(a, n);
    pmax(a, n);
    min(a,n);
    pmin(a,n);
}
