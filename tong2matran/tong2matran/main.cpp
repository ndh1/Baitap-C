//
//  main.cpp
//  tong2matran
//
//  Created by Nguyen Dinh Huong on 05/07/2021.
//

#include <iostream>

void nhap(int a[][100],int n,int m){
    do {
        if(n<0 || m<0){
            printf("nhap lai n, m =");
        }
    } while (n<0 || m<0);
    for (int i=0; i<n;i++){
        for (int j=0;j<m;j++){
            printf("[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void xuat(int a[][100],int n,int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[100][100],b[100][100],c[100][100],n,m;
    printf("nhap n = ");scanf("%d",&n);
    printf("nhap m = ");scanf("%d",&m);
    nhap(a, n, m);
    nhap(b, n, m);
    xuat(a, n, m);
    xuat(b, n, m);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
}
