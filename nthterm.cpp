#include<iostream>
using namespace std;
int main(void)
{
    float a, d, n, an, i;

    cout << "Enter first term and common difference of the Arithmetic Sequence: " << endl;
    cin >> a >> d;

    cout << "Enter the number of term up to which you have to find AP: (n) " << endl;
    cin >> i;

    for(n=1;n<=i;n++){
        an = a + (n-1)*d;

        cout << n <<"th term is " << an << endl;
    }
    return 0;
}

