//
//  main.cpp
//  3.23
//
//  Created by Thuy Ha on 12/08/2023.
//

#include <iostream>
using namespace std;

int main() {
    int m;
    int n;
    int p=1;
    cin >> m;
    cin >> n;
    
    while (n != 0)
    {p *= m;
        n -= 1;
        m -= 1;
    }
    cout << p;
    return 0;
}
