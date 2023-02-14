#include <iostream>
#include <string>

using namespace std;

class HellClass
{
public:
    HellClass(string z)
    {
        setName(z);
    }
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }
private:
    string name;

};

int main()
{
    HellClass hellObject("bla name bla");

   cout << hellObject.getName();

   HellClass hellObject2("another name");

   cout << hellObject2.getName();

    return 0;
}
