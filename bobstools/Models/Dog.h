//
// Created by Robert Sanders on 21/05/2020.
//

#include <string>

#include "Animal.h"

#ifndef BOBSTOOLS_DOG_H
#define BOBSTOOLS_DOG_H

namespace Model {

    class Dog : public Animal {
    private:
        std::string sound = "Woof";

    public:
        Dog();
        Dog(std::string name);
        void MakeNoise() override;
    };

}

#endif //BOBSTOOLS_DOG_H
