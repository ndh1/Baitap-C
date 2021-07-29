//
//  main.cpp
//  Bai25_TimBCNN
//
//  Created by Nguyen Dinh Huong on 29/06/2021.
//

#include <iostream>
#include<stdio.h>
#include <algorithm>

int main(){
    int a,b,lcm = 0;
    
    
    printf("Nhap a = ");scanf("%d",&a);
    printf("Nhap b = ");scanf("%d",&b);
    int maxV=a*b;
    for(int i=std::max(a,b);i<=maxV;i++){
        if (i%a == 0 && i%b == 0){
            lcm=i;
            break;
        }
    }
    printf("%d",lcm);
    
    
}
