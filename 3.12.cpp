//
//  main.cpp
//  3.12
//
//  Created by Thuy Ha on 12/08/2023.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n<=31) cout << "January " << n;
    if (n>31 && n<=59) cout << "Febuary " << n-31;
    if (n>59 && n<=90) cout << "March " << n-59;
    if (n>90 && n<=120) cout << "April " << n-90;
    if (n>120 && n<=151) cout << "May " << n-120;
    if (n>151 && n<=181) cout << "June " << n-151;
    if (n>181 && n<=212) cout << "July " << n-181;
    if (n>212 && n<=243) cout << "August " << n-212;
    if (n>243 && n<=273) cout << "September " << n-243;
    if (n>273 && n<=304) cout << "October " << n-273;
    if (n>304 && n<=334) cout << "November " << n-304;
    if (n>334 && n<=365) cout << "December " << n-334;
    return 0;
}
