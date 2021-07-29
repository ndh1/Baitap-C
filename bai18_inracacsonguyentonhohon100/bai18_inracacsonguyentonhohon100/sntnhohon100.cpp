//
//  sntnhohon100.cpp
//  bai18_inracacsonguyentonhohon100
//
//  Created by Nguyen Dinh Huong on 28/06/2021.
//

#include <stdio.h>
#include <math.h>
int main(){
    printf("Cac so nguyen to nho hon 100");
    
    
    for (int num=1;num<=100;num++){
        int count =0;
        for (int i=2;i<sqrt(num);i++){
            if (num % i == 0){
                count = count +1;
            }
        }
        if (count == 0 && num > 1 ){
            printf("\t%d",num);
        }
    }
}
