#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()

{
    int T;

    unsigned int Cx, Cy, Px, Py;
    double r, d ;

    cin >> T;

    if ((T > 0) && (T <= 100))
    {
        for (int n=1; n<=T; n++)
            cin >> Cx >> Cy >> r >> Px >> Py;
            if ((Cx, Cy, Px, Py < 1000) && (r > 0))
            {
                d = (sqrt((Cx-Cy)*(Cx-Cy)) + ((Px-Py)*(Px-Py)));

                cout << d << endl;

                if(d < r)
                    cout << "Inside" << endl;
                if(d == r)
                    cout << "OnCircle" << endl;
                if(d > r)
                    cout << "Outside" << endl;
            }
            else
                cout << "Invalid Input";
    }
    else
        cout << "Invalid Case";

    return 0;
}
