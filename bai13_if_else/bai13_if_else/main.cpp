//
//  main.cpp
//  bai13_if_else
//
//  Created by Nguyen Dinh Huong on 27/06/2021.
//

#include <iostream>

int main(){
    int a;
    
    printf("Nhap a = ");scanf("%d",&a);
    
    //Kiểm tra là số âm hay dương hay bằng 0
    if (a>0)
    {
        printf("%d la so duong ",a);
        if (a%2==0){
            printf("\nVa la so duong chan\n");
        } else {
            printf("\nVa la so duong le\n");
        }
    }
    else if (a<0) {
        printf("%d la so am",a);
        if (a%2==0){
            printf("\nVa la so am chan\n");
        }else {
            printf("\nVa la so am le\n");
        }
    }
    else {
        printf("la so 0");
    }
}
