#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "type something in: ";
    cin >> input;

    int i = 0;

    //loops ==> while, Do while, For

    for(i= 0; i < 5; i+= 2)
    {
        cout << input << endl;
    }

    return 0;
}
