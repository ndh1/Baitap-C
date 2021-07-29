//
//  main.c
//  bai45_tanggiam
//
//  Created by Nguyen Dinh Huong on 01/07/2021.
//

#include <stdio.h>

void nhapmang(int a[],int n){
//    do {
//        if(n<0){
//            printf("Nhap lai n ");
//        }
//    } while (n<0);
    
    for (int i=0;i<n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void xuatmang(int a[],int n){
    printf("Mang vua nhap la");
    for (int i=0;i<n;i++){
        printf("\ta[%d] = %d",i,a[i]);
    }
}

void sapxeplaimang(int a[],int n){
    int tam=0;
    printf("\nMang sau khi duoc sap xep lai\n ");
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }
    
    for (int i = 0; i<n;i++){
        printf("\ta[%d] = %d",i,a[i]);
    }
}

int main()
{
    int a[50];
    int n;
    printf("Nhap n = ");scanf("%d",&n);
    nhapmang(a, n);
    xuatmang(a, n);
    sapxeplaimang(a, n);
    
}
