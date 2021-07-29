//
//  main.cpp
//  bai15_timsolonnhat
//
//  Created by Nguyen Dinh Huong on 27/06/2021.
//

#include <iostream>

int main(){
    int a,b,c;
    
    printf("Nhap a\n");scanf("%d",&a);
    printf("Nhap b\n");scanf("%d",&b);
    printf("Nhap c\n");scanf("%d",&c);
    
    int sln = a ;
    
    if (b>sln){
        sln=b;
    }
    if (c>sln){
        sln=c;
    }
        
    printf("So lon nhat = %d",sln);
}
