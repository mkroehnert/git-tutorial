#include <iostream>
#include <string>

class World
{
public:
    World() :
        name("World"),
        greetString("Hello")
    {}
    World(const std::string& name, const std::string& greetString = "Hello") :
        name(name),
        greetString(greetString)
    {}

    ~World(){}

    void setName(const std::string& name)
    {
        this->name = name;
    }

    void setPrintString(const std::string& greetString)
    {
        this->greetString = greetString;
    }

    void hello()
    {
        std::cout << greetString << " " << name << std::endl;
    }
private:
    std::string name;
    std::string greetString;
};

int main()
{
    World* world = new World();
    world->hello();
    world->setName("Mars");
    world->hello();
    world->setPrintString("Aloha");
    world->hello();
    delete world;

    return 1;
}
