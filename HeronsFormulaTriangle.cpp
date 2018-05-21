#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a, b, c, s, areaoftriangle;

    cout << "Enter the sides of triangle: " << endl;
    cin >> a >> b >> c;

    s = (a+b+c)/2;

    areaoftriangle = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "AREA OF TRINAGLE IS " << areaoftriangle << " sq. units "<< endl;
    return 0;

}
