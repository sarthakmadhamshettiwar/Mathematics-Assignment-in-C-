#include<iostream>
using namespace std;
int main(void)
{
    int a, b, c, max;

    cout << "Enter three numbers for finding their LCM " << endl;
    cin >> a >> b >> c;

//Loop for finding LCM of three numbers that you have entered previously.
    max=a;
    while(max>=0){
        if(max%a==0 && max%b==0 && max%c==0){
            cout << max << " is the LCM." << endl;
            return 0;
        }
        max++;
    }
}
