//
//  main.cpp
//  bai42_tinhtongcacsole
//
//  Created by Nguyen Dinh Huong on 01/07/2021.
//

#include <iostream>

void nhapmang(int a[],int n){
    for (int i=0;i<n;i++){
        printf("Nhap a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[],int n){
    for (int i=0;i<n;i++){
        printf("\na[%d] = %d",i,a[i]);
    }
}

int tinhtongcacsole(int a[],int n){
    int sum=0;
    
    for (int i=0;i<n;i++){
        if (a[i] % 2 != 0 ){
            sum = sum + a[i];
        }
    }
    printf("\nTong cac so le tu 1 den n = %d ",sum);
    return sum;
}

int tinhtongcacsochan(int a[],int n){
    int sum1=0;
    
    for (int i=0;i<n;i++){
        if (a[i] % 2 == 0 ){
            sum1= sum1 + a[i];
        }
    }
    printf("\nTong cac so chan tu 1 den n = %d",sum1);
    return sum1;
}


int main(){
    int n;
    int a[50];
    printf("Nhap n = ");
    scanf("%d",&n);
    nhapmang(a, n);
    xuatmang(a, n);
    tinhtongcacsole(a, n);
    tinhtongcacsochan(a, n);
}
