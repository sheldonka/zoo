#include <iostream>
#include <string>

class Animal {
public:
    Animal() {}
    
public:
    virtual void Sound() const {}
    virtual void Move() const {}
};

class Bird : public Animal {
public:
    Bird() {}

public:
    void Sound() const {
        std::cout << "piu piu " << std::endl;
    }
    
    void Move() const {
        std::cout << "fly " << std::endl;
    }
};

class Fish : public Animal {
public:
    Fish() {}

public:
    void Move() const {
        std::cout << "swim " << std::endl;
    }    
};

int main()
{
    Animal animal;
    Bird bird;
    Fish fish;

    Animal* animals[] = {&bird, &fish};

    return 0;
}
