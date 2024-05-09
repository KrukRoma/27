#include <iostream>
#include <string>
using namespace std;

class Pet 
{
protected:
    string name;
    double height; 
    double weight; 

public:
    Pet(const string& petName, double petHeight, double petWeight) : name(petName), height(petHeight), weight(petWeight) {}

    void makeSound() const 
    {
        cout << name << " makes an unknown sound." << endl;
    }

    string getName() const 
    {
        return name;
    }

    double getHeight() const 
    {
        return height;
    }

    double getWeight() const 
    {
        return weight;
    }
};

class Dog : public Pet {
public:
    Dog(const string& dogName, double dogHeight, double dogWeight) : Pet(dogName, dogHeight, dogWeight) {}

    void makeSound() const  
    {
        cout << name << " gav!" << endl;
    }
};

class Cat : public Pet 
{
public:
    Cat(const string& catName, double catHeight, double catWeight) : Pet(catName, catHeight, catWeight) {}

    void makeSound() const  
    {
        cout << name << " meows!" << endl;
    }
};

class Parrot : public Pet 
{
public:
    Parrot(const string& parrotName, double parrotHeight, double parrotWeight) : Pet(parrotName, parrotHeight, parrotWeight) {}

    void makeSound() const  
    {
        cout << name << " car!" << endl;
    }
};

int main() 
{
    Dog myDog("Barsik", 0.5, 10);
    Cat myCat("Pushik", 0.3, 4);
    Parrot myParrot("Kesha", 0.2, 0.5);

    myDog.makeSound();
    myCat.makeSound();
    myParrot.makeSound();

    cout << myDog.getName() << " is " << myDog.getHeight() << " meters tall and weighs " << myDog.getWeight() << " kg." << endl;
    cout << myCat.getName() << " is " << myCat.getHeight() << " meters tall and weighs " << myCat.getWeight() << " kg." << endl;
    cout << myParrot.getName() << " is " << myParrot.getHeight() << " meters tall and weighs " << myParrot.getWeight() << " kg." << endl;
}

