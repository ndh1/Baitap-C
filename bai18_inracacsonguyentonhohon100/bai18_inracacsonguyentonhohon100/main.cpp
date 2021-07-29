//
//  main.cpp
//  bai18_inracacsonguyentonhohon100
//
//  Created by Nguyen Dinh Huong on 28/06/2021.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int count=0;
    printf("Nhap a = ");
    scanf("%d",&a);


    for (int i=2;i<=sqrt(a);i++){
        if (a%i == 0 ){
            printf("\n%d chia het cho %d",a,i);
            count = count +1;
        }
    }
    if (count == 0 && a>1){
        printf("\n%d la so nguyen to",a);
    } else {
        printf("\n%d khong la so nguyen to",a);
    }
    
    printf("\nCac so nguyen to nho hon 1000 \n ");
    
    for (int num=1;num<1000;num++){
        int count =0;
        for (int i=2;i < sqrt(num) ;i++){
            if(num%i == 0)
            {
                count=count+1;}
        }
        if (count == 0 && num>1){
            printf("%d\t",num);
        }
    }
    

}
