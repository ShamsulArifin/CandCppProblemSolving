#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char** argv)

{
    std::cout << "Hello world" << std::endl;

    if(argc != 1)
    {
        std::cout << "you entered" << argc << "arguments\n";
    }

    return 0;
}
