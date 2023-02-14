#include <iostream>

using namespace std;
/* int addNumbers( int x, int y );
void printCrap(int z); */

class SomeClass
{
public:
    void coolSaying()
    {
        cout << "code code code code" << endl;
    }
};

int main ()

{
    /*cout << addNumbers(4,6) << endl;
    printCrap(20); */

    SomeClass someObject;
    someObject.coolSaying();

    return 0;
}

/* void printCrap( int z )

{

   cout << "Crap is " << z << endl;
}

int addNumbers( int x, int y )
 {
    int answer = x + y;
    return answer;
 }
 */

