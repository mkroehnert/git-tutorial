#include <iostream>
#include <string>

class World
{
public:
    World(){}
    ~World(){}

    void hello()
    {
    std::cout << "Hello World" << std::endl;
    }
private:
    std::string name;
};

int main()
{
    World* world = new World;
    world->hello();
    delete world;
    return 0;
}

