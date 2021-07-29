//
//  main.c
//  bai8_10_toantusohoc
//
//  Created by Nguyen Dinh Huong on 27/06/2021.
//

#include <stdio.h>

int main(){
    int a,b;
    printf("Nhap a\n");scanf("%d",&a);
    printf("Nhap b\n");scanf("%d",&b);
    
    int tong;
    tong = a+b;
    printf("Tong = %d ",tong);
    int hieu;
    hieu = a-b;
    printf("Hieu = %d ",hieu);
    int tich;
    tich=a*b;
    printf("Tich = %d ",tich);
    float thuong;
    thuong=a/b*1.0;
    printf("Thuong = %2.f",thuong);
    float mod;
    mod=a%b;
    printf("Mod = %2.f",mod);
    
    getchar();10
    
}
