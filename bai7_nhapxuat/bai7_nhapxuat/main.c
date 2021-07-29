//
//  main.c
//  bai7_nhapxuat
//
//  Created by Nguyen Dinh Huong on 27/06/2021.
//

#include <stdio.h>

int main(){
    int a;
    int n;
    float b;
    char c;
    
    
    printf("\nA = ");scanf("%d",&a);
    printf("\nN = ");scanf("%d",&n);
    printf("\nB = ");scanf("%f",&b);
    printf("\nC = ");scanf("%s",&c);
    
    printf("\nA = %d",a);
    printf("\nN = %d",n);
    printf("\nB = %.2f",b);
    printf("\nC = %c",c);
    
    int a1, a2;
    
    printf("\nNhap a1, a2 : ");
    scanf("%d%d",&a1,&a2);
    printf("\n a1 = %d \n a2 = %d ",a1,a2);
    getchar();
    
}
