//
//  main.cpp
//  bai17_Tongcacsochantrongdoan_ab
//
//  Created by Nguyen Dinh Huong on 28/06/2021.
//

#include <iostream>

int main(){
    int a;
    int b;
    int sum=0;
    
    printf("Nhap a = ");scanf("%d",&a);
    printf("Nhap b = ");scanf("%d",&b);
    
    if (a>b) {
        printf("Nhap lai a va b");
        return 0;
    }
    
    for(int i=a;i<=b;i++){
        if (i % 2 == 0){
            sum += i;
        }
    }
    printf("sum = %d\n",sum);
}
