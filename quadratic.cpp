// This program will find the roots of QUADRATIC EQUATION when they are real and equal
// It can bes used by anyone but remember that its better to practice such Questions.
/* The given program is based on the Quadratic Formula or "Shridharacharya's Formula"
                    I HOPE IT IS HELPFUL
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b, c, discriminant;
    float root1, root2;

    cout << "Enter the values of a, b and c for QUADRATIC EQUATION" << endl;
    cout << "Remember that quadratic equation is of the form ax^2+bx+c = 0 "<< endl;
    cin >> a >> b >> c;

    discriminant = b*b-4*a*c;

    if(discriminant<0){
        cout <<"Discriminant is " << discriminant << endl;
        cout << "Roots are Imaginary" << endl;
    }
    else {
        root1 = (-b + sqrt(discriminant))/2*a;
        root2 = (-b - sqrt(discriminant))/2*a;

        cout << "Discriminant is " << discriminant << endl;
        cout << "Roots are " << root1 << " and " << root2 <<endl;
    }
    return 0;
}
