//
//  main.c
//  bai12_hoanvi
//
//  Created by Nguyen Dinh Huong on 27/06/2021.
//

#include <stdio.h>

int main(){
    int a,b;
    int temp;
    
    printf("\nNhap a = ");scanf("%d",&a);
    printf("\nNhap b = ");scanf("%d",&b);
    
    //Hoán Vị
    temp = a;
    a = b;
    b = temp;
    
    printf("\nA = %d ",a);
    printf("\nB = %d ",b);
    
    getchar();
}
