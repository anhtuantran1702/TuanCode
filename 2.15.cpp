//
//  main.cpp
//  2.15
//
//  Created by Thuy Ha on 09/08/2023.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    float a = 20;
    float b = -100;
    float c = 10;
    float d = b*b - 4*a*c;
    float x1 = (2*c)/(-b+sqrt(d));
    float x2 = (2*c)/(-b-sqrt(d));
    cout << x1 << " " << x2;
    return 0;
}
