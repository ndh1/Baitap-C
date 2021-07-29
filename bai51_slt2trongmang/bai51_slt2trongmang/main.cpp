//
//  main.c
//  bai51_timsolonthu2trongmang
//
//  Created by Nguyen Dinh Huong on 03/07/2021.
//

#include <stdio.h>
void nhap(int a[],int n){
    do {
        if(n<0){
            printf("Nhap lai n = ");
        }
    } while (n<0);
    
    for(int i=0;i<n;i++){
        printf("\n Nhap phan tu thu %d :  ",i);
        scanf("%d",&a[i]);
    }
}

void xuat(int a[],int n){
    for (int i=0;i<n;i++){
        printf("\n a[%d] = %d ",i,a[i]);
    }
    
}

void hoanvi(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

void sapxepmang(int a[],int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]<a[j]){
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}
int inslt2(int a[],int n){
    sapxepmang(a, n);
    return a[1];
}

int intslt2b(int a[],int n){
    int fmax,smax;
    
    if (a[0]>a[1]){
        fmax=a[0];
        smax=a[1];
    }else {
        fmax=a[1];
        smax=a[0];
    }
    
    for (int i=2;i<n;i++){
        if (a[i]>fmax){
            fmax=a[i];
            smax=fmax;
        }
        else if (a[i]>smax){
            smax=a[i];
        }
    }
    
    return smax;
}

int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d",&n);
    int a[50];
    nhap(a, n);
    xuat(a,n);
    printf("\nSo lon thu 2 la = %d ",inslt2(a,n));
    printf("\nSo lon thu 2 la = %d ",intslt2b(a,n));
}
