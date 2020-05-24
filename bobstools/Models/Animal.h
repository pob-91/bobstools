//
// Created by Robert Sanders on 20/05/2020.
//

#include <string>

#include "AnimalType.h"

#ifndef BOBSTOOLS_ANIMAL_H
#define BOBSTOOLS_ANIMAL_H

class Animal {
protected:
    AnimalType Type;

public:
    std::string Name;

    Animal();
    Animal(std::string Name, AnimalType Type);

    virtual void MakeNoise();
};


#endif //BOBSTOOLS_ANIMAL_H
