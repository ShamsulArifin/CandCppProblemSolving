#include <iostream>

using namespace std;

int main()

{
    int age;
    int ageTotal = 0;
    int people = 0;

    cout << "Enter first persons age or -1 to quit" << endl;
    cin >> age;

    while(age != -1)
    {
        ageTotal = ageTotal + age;
        people++;

        cout << "Enter next persons age or -1 to quit" << endl;
        cin >> age;
    }

    cout << "Number of people entered: " << people << endl;
    cout << "Average age: "<< ageTotal/people;

    return 0;
}
