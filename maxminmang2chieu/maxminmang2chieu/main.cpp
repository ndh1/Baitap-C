//
//  main.cpp
//  maxminmang2chieu
//
//  Created by Nguyen Dinh Huong on 05/07/2021.
//

#include <iostream>

void nhap(int a[][100],int n,int m){
    do {
        if (n<0 || m<0){
            printf("n va m phai lon hon 0, nhap lai n ");
        }
    } while (n<0 || m<0);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
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

void maxarray(int a[][100],int n,int m){
    int max=a[0][0];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(a[i][j] > max){
                max=a[i][j];
            }
        }
    }
    printf("\ngia tri lon nhat trong mang la = %d ",max);
}

void minarray(int a[][100],int n,int m){
    int min=a[0][0];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (a[i][j] < min){
                min=a[i][j];
            }
        }
    }
    printf("\ngia tri nho nhat trong mang la = %d ",min);
}

int main(){
    int a[100][100],n,m;
    printf("nhap n = "); scanf("%d",&n);
    printf("nhap m = "); scanf("%d",&m);
    nhap(a, n, m);
    xuat(a, n, m);
    maxarray(a, n, m);
    minarray(a, n, m);
}
