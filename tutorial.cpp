#include <iostream>

void printHelloWorld()
{
    std::cout << "Hello World" << std::endl;
}

class World
{
    World();
    ~World();
};

int main()
{
    printHelloWorld();
    return 0;
}

