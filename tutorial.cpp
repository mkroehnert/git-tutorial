#include <iostream>
#include <string>

class World
{
public:
    World() :
        name("World"),
        printString("Hello")
    {}
    World(const std::string& name, const std::string& printString = "Hello") :
        name(name),
        printString(printString)
    {}

    ~World(){}

    void hello()
    {
    std::cout << "Hello " << name << std::endl;
    }
private:
    std::string name;
    std::string printString;
};

int main()
{
    World* world = new World("Mars");
    world->hello();
    delete world;
    return 0;
}

