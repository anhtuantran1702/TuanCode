//
//  main.cpp
//  3.19
//
//  Created by Thuy Ha on 12/08/2023.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    int i=1;
    int m=0;
    cin >> n;
    int p=n*(n+1)/2;
    while (i<=n)
    { m += i;
        i += 1;}
    cout << m << '\n' << p << '\n';
        
    return 0;
}
