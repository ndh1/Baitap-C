//
//  main.cpp
//  bai43_timmaxmintrongmang
//
//  Created by Nguyen Dinh Huong on 01/07/2021.
//

#include <iostream>

void nhapmang(int a[],int n){
    for (int i=0;i<n;i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[], int n){
    for (int i=0;i<n;i++){
        printf("\ta[%d] = %d",i,a[i]);
        }
    }
int max(int a[],int n){
    int sln=a[0];
    for (int i=0;i<n;i++){
        if (sln<a[i]){
            sln=a[i];
        }
    }
    printf("\nsln = %d",sln);
    return sln;
}

int min(int a[],int n){
    int snn=a[0];
    for (int i=0;i<n;i++){
        if (snn>a[i]){
            snn=a[i];
        }
    }
    printf("\nsnn= %d",snn);
    return snn;
}


int main(){
    int n;
    printf("nhap n = ");scanf("%d",&n);
    int a[50];
    
    nhapmang(a, n);
    xuatmang(a, n);
    min(a, n);
    max(a,n);
}
