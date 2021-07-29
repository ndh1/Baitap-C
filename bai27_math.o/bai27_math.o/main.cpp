//
//  main.cpp
//  bai27_math.o
//
//  Created by Nguyen Dinh Huong on 30/06/2021.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

int main(){
    float pi=3.14;
    int d=30; //30 do
    printf("Sin cua %d do = %.2f ",d,sin(d*pi/180));
    
    double param,result;
    param = 5.0;
    result=exp(param);
    printf("\n gia tri = %.2f",result);
}
