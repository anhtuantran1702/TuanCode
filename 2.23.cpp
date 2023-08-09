//
//  main.cpp
//  2.23
//
//  Created by Thuy Ha on 09/08/2023.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = n%10;
    n /= 10;
    int b = n%10;
    n /= 10;
    int c = n%10;
    n /= 10;
    int d = n%10;
    n /= 10;
    int e = n%10;
    n /= 10;
    int f = n%10;
    cout << ((((a*10+b)*10+c)*10+d)*10+e)*10+f;
    
   
    return 0;
}
