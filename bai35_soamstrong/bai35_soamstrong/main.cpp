//
//  main.cpp
//  bai35_soamstrong
//
//  Created by Nguyen Dinh Huong on 30/06/2021.
//

#include <iostream>
#include <math.h>

int dem(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

bool isArmStrong(int n){
    int numd=dem(n);
    int tmp=n,last,sum=0;
    while(tmp>0){
        last=tmp%10;
        tmp /=10;
        sum+=pow(last,numd);
    }
    if (sum == n)
        return true;
     return false;
}


int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d",&n);
    if (isArmStrong(n)==true){
        printf("\nDay la so armstrong");
    }else {
        printf("\nDay khong la so armstrong");
    }
}

