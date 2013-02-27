#include <iostream>

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

