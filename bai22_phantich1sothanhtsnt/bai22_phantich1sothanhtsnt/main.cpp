//
//  main.cpp
//  bai22_phantich1sothanhtsnt
//
//  Created by Nguyen Dinh Huong on 29/06/2021.
//

#include <iostream>

int main(){
    unsigned int n;
    
    printf("Nhap n>1 = ");scanf("%d",&n);
    
    if (n<2){
        printf("Nhap lai n");
    }else{
        unsigned int i =2 ;
        printf("%d = ",n);
        while(n>1){
            if (n%i==0){
                printf("%d",i);
            if (n != i) {
                printf("x");
            }
            n /=i ;
        }else {
            i++;
        }
    }
}
    return 0;
}

