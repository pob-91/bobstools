//
// Created by Robert Sanders on 20/05/2020.
//

#include <iostream>

#include "Animal.h"

using namespace std;

Animal::Animal() {
  cout << "Animal constructed of type " << this->Type << endl;
}

Animal::Animal(string Name, AnimalType Type) {
  this->Name = Name;
  this->Type = Type;
  cout << "Animal constructed with name: " << Name << " and type: " << Type << endl;
}

void Animal::MakeNoise() {
  cout << "I'm not sure what noise I make!" << endl;
}