//
//  main.cpp
//  nhapxuatmang2chieu
//
//  Created by Nguyen Dinh Huong on 05/07/2021.
//

#include <iostream>
void nhap(int a[][100],int n, int m){
    do {
        if (n<0 || m<0){
            printf("N hoac M khong duoc nho hon 0");
        }
    } while (n<0 || m<0);
    
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void xuat (int a[][100],int n, int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int sumrowchan (int a[][100],int n,int m){
    int sum=0;
    for (int i=0;i<n;i=i+2){
        for (int j=0;j<m;j++){
            sum=sum + a[i][j];
        }
    }
    return sum;
}

void maxcol(int a[][100],int n,int m){ //tim max tren cot 1
    int max=a[0][0];
    for (int i=0;i<n;i++){
        if (a[i][0] > max) {
            max = a[i][0];
            }
        }
    printf("\n%d",max);
    }

int main(){
    int a[100][100],n,m;
    printf("nhap n = ");scanf("%d",&n);
    printf("nhap m = ");scanf("%d",&m);
    nhap(a, n, m);
    xuat(a, n, m);
    printf("%d",sumrowchan(a, n, m));
    maxcol(a, n, m);
}
