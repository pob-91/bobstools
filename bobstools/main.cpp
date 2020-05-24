/*
 * make an animal class with a noise method DONE
 * inherit from animal and make dog with bark DONE
 * read a txt file DONE
 * manipulate a txt file DONE (sorta)
 * read, parse and manipulate a json file
 * encrypt and unlock the file
 * make an http request
 * see if there are any 3rd party libraries out there for exploring data via the terminal
 * implement the most common data structures (like doing a CS degree)
 * implement the most useful algorithms (list sort e.t.c CS degree)
 * make a basic weather and news console
 * make a web server that gets texts from twilio and adds expenditure to google drive (or some other cool server side thing, use low level shit)
 * on command open a window and render the camera
 * stream video data between two machines via a web server
 * encrypt video data
 * compress video data (how best?)
 * experiment with doing this in unreal
 */

#include <iostream>
#include <unistd.h>
#include <fstream>

#include "json.hpp"

#include "Animal.h"
#include "Dog.h"

using namespace std;

int main(int argc, char ** argv) {

    Animal animal;
    Animal other("Bill", AnimalType::Cat);

    Model::Dog fido;
    Model::Dog barry("barry");

    fido.Name = "fido";

    animal.MakeNoise();
    fido.MakeNoise();
    
    // get current working dir (note, different for windows so have to use an ifdef
    char buff[FILENAME_MAX];
    getcwd(buff, FILENAME_MAX);
    string currentWorkingDir(buff);
    
    cout << currentWorkingDir << endl;
    
    cout << argc << endl;
    
    // print command line args
    for (int i = 0; i < argc; i++) {
        string arg(*(argv + i));
        cout << arg << endl;
    }
    
    // read a file
    ifstream fileHandle("info.json");
    if (fileHandle.is_open()) {
        string line;
        while(getline(fileHandle, line)) {
            cout << line << endl;
        }
        fileHandle.close();
    } else {
        cout << "Could not open file" << endl;
    }

    return 0;
}
