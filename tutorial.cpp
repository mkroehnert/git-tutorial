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

    void setName(const std::string& name)
    {
        this->name = name;
    }

    void setPrintString(const std::string& printString)
    {
        this->printString = printString;
    }

    void hello()
    {
        std::cout << printString << " " << name << std::endl;
    }
private:
    std::string name;
    std::string printString;
};

int main()
{
    World* world = new World();
    world->hello();
    world->setName("Mars");
    world->hello();
    delete world;
    return 1;
}
