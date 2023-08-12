//
//  main.cpp
//  3.27
//
//  Created by Thuy Ha on 12/08/2023.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    int p;
    cin >> n;
    cin >> m;
Xuli:
    if (n == m) { cout << m; return 0;}
    if (m<n)
    {n -= m;
        goto Xuli;}
    else
    {   p = n;
        n = m;
        m = p;  }
    goto Xuli;
    return 0;
}
