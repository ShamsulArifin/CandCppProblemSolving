#include <cstdlib>
#include <iostream>

using namespace std;

int AddXY(int x, int y)

{
    return x + y;
}

float AddXY(float x, float y)

{
    return x + y;
}

double AddXY(double x, double y)

{
    return x + y;
}

int main()

{
    cout << "integer X+Y: " << AddXY(5,5) << endl;
    cout << "float X+Y: " << AddXY(4.546,3.675) << endl;
    cout << "double X+Y: " << AddXY(90.654328731,7.5443215645) << endl;

    return 0;
}
