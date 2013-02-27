#include <iostream>
#include <string>

class World
{
public:
    World()
    : name("World")
    {}
    World(const std::string& name)
    : name(name)
    {}

    ~World(){}

    void hello()
    {
    std::cout << "Hello " << name << std::endl;
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

