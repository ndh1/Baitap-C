//
//  main.cpp
//  b
//
//  Created by Nguyen Dinh Huong on 08/07/2021.
//

#include <iostream>


using namespace std;
int main() {
    int n;
    double sum=0;
    cin >> n; //so nguyen duong n
    if (n<2) {
        cout << "Nhap lai!";
    }
    else {
    for (double i=2; i<=n; i++) {
        sum+=1/i;
    }
    cout<<setprecision(4)<<fixed<<sum;
    }
    return 0;
}
}
