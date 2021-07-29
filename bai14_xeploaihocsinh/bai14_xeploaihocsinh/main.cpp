//
//  main.cpp
//  bai14_xeploaihocsinh
//
//  Created by Nguyen Dinh Huong on 27/06/2021.
//

#include <iostream>

int main(){
    float a,b,c;
    
    printf("\nNhap diem toan = ");scanf("%f",&a);
    printf("\nNhap diem van = ");scanf("%f",&b);
    printf("\nNhap diem anh van = ");scanf("%f",&c);
    
    if ( (a<0 || a>10) ){
        printf("\nNhap lai diem toan = ");
        scanf("%f",&a);
    }
    if ( (b<0 || b>10) ){
        printf("\nNhap lai diem van = ");
        scanf("%f",&b);
    }
    
    if ( (c<0 || c>10) ){
        printf("\nNhap lai diem anh van = ");
        scanf("%f",&c);
    }
    
    float tb = (a+b+c)/3;
    printf ("trung binh mon = %2.f",tb);
    if (tb==0 || tb<4.0){
        printf("\nHoc sinh yeu");
    }
    else if (tb==4 || tb<6.5){
        printf("\nHoc sinh trung binh");
    }else if (tb==6.5 || tb<8.0){
        printf("\nHoc sinh kha");
    }else {
        printf("\nHoc sinh gioi");
    }
    printf("\n");
    
    
}
