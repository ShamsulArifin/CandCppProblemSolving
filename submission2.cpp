#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()

{
    int T;
    double AB, BC, CD, AC, nAC, AD, nAD;

    cin >> T;

    if ( T <= 30 )
    {
       for (int n=1; n<=T; n++)
       {
           cin >> AB >> BC >> CD;
           AC = ((pow(AB,2))+(pow(BC,2)));
           nAC = (pow(AC,0.5));
           AD = ((pow(nAC,2))+(pow(CD,2)));
           nAD = (pow(AD,0.5));

           cout << fixed << setprecision(2) << nAD << endl;
       }
    }
    else
        cout << "Invalid" << endl;

    return 0;
}

