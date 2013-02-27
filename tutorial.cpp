#include <iostream>

void printHelloWorld()
{
    std::cout << "Hello World" << std::endl;
}

class World
{
public:
    World(){}
    ~World(){}

    void hello()
    {
    std::cout << "Hello World" << std::endl;
    }
};

int main()
{
    World* world = new World;
    world->hello();
    delete world;
    return 0;
}

