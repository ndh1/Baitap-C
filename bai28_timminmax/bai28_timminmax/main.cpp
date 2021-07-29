//
//  main.cpp
//  bai28_timminmax
//
//  Created by Nguyen Dinh Huong on 30/06/2021.
//

#include <iostream>

int min2num(int a,int b){
    return a<b ? a:b;
}

int max2num(int a,int b){
    return a>b ? a:b;
}

int max3num(int a,int b,int c){
    return max2num(max2num(a, b), c);
}
int min3num(int a,int b,int c){
    return min2num(min2num(a, b), c);
}

int main(){
    int a,b,c;
    printf("nhap a = ");scanf("%d",&a);
    printf("nhap b = ");scanf("%d",&b);
    printf("nhap c = ");scanf("%d",&c);
    
    min2num(a, b);
    max2num(a, b);
    printf("min = %d",min3num(a, b, c));
    printf("max = %d",max3num(a, b, c));
}
