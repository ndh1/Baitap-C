//
//  main.cpp
//  bai36_inchuoidaonguoc
//
//  Created by Nguyen Dinh Huong on 30/06/2021.
//

#include <iostream>

void daonguoc(){
    char c;
    
    scanf("%c",&c);
    
    if(c != '\n'){
        daonguoc();
        printf("%c",c);
    }
}

int main(){
    printf("Nhap chuoi : ");
    daonguoc();
}
