//
//  main.cpp
//  bai20_vonglaplinhhoat
//
//  Created by Nguyen Dinh Huong on 28/06/2021.
//

#include <iostream>

int main(){
int number;
printf("Nhap number");
scanf("%d",&number);
int last=number;
//    for(;last>9;){
//        last=last/10;
//    }
//    printf("Chu so dau tien cua %d la %d",number,last);
//
//    while (last>9){
//        last /= 10;
//    }
//
    do {
        if(last<10){
            printf("Chu so dau tien cua %d la %d", number, last);
            return 0;
        }
        last /=10;
    } while (true);
}
