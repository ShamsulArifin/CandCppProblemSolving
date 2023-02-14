#include <iostream>
#include <string>

using namespace std;



int main()
{
    char grade;
    cout << "Type in your grade: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        cout << endl << "you got a A!" << endl;
        break;
    case 'B':
    case 'b':
        cout << endl << "you got a B!" << endl;
        break;
    case 'C':
    case 'c':
        cout << endl << "you gor a C!" << endl;
        break;

    default:
        cout << endl << "you FAIL!" << endl;
    }

    return 0;
}
