//
//  main.cpp
//  2.21
//
//  Created by Thuy Ha on 09/08/2023.
//

#include <iostream>
using namespace std;

int main() {
    int h;
    cin >> h;
    int w = h/168;
    int d = (h%168)/24;
    int h1 = (h%168)%24;
    cout << w << '\n';
    cout << d << '\n';
    cout << h1 << '\n';
    return 0;
}
