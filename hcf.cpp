// This program will find the Greatest Common Divisor(GCD) of two numbers using FOR LOOP.
// Further it will also Lowest common multiple (LCM) using formula LCM*HCF = PRODUCT OF TWO NUMBERS.

#include<iostream>
using namespace std;
int main()
{
    int a, b, lcm, gcd;

    cout << "Enter two digits to find their LCM and GCD" << endl;
    cin >> a >> b;

    if(a%b == 0){
        gcd = b;
        cout << "HCF of " << a << " and " << b <<" is " << gcd << endl;
        lcm = a*b/gcd;
        cout << "LCM of " << a << " and " << b <<" is " << lcm << endl;
    }
    else if(b%a == 0.0){
        gcd = a;
        cout << "HCF of " << a << " and " << b <<" is " << gcd << endl;
        lcm = a*b/gcd;
        cout << "LCM of " << a << " and " << b <<" is " << lcm << endl;
    }
    else{
        for(gcd = a;gcd>=1;gcd--){
            if(a%gcd==0 && b%gcd==0){
                cout << "HCF of " << a << " and " << b <<" is " << gcd << endl;
                lcm = a*b/gcd;
                cout << "LCM of " << a << " and " << b <<" is " << lcm << endl;
                return 0;
            }
        }
    }

    return 0;
}
