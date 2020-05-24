//
// Created by Robert Sanders on 21/05/2020.
//

#include <iostream>

#include "Animal.h"
#include "AnimalType.h"
#include "Dog.h"

using namespace std;

namespace Model {
    Dog::Dog() : Animal()  {
        //this->Type = AnimalType::Dog;
    }

    Dog::Dog(std::string name) : Animal(name, AnimalType::Dog) {}

    void Dog::MakeNoise() {
        cout << this->Name << " says " << this->sound;
    }
}