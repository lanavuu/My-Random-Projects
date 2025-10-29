#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <iostream>

//blueprint of the whole class ok

class character {

    public:
    character();
    character(std::string name);
    character(std::string name, std::string rank);
    character(std::string name, std::string rank, std::string breathing);
    character(std::string name, std::string rank, std::string breathing, bool status); //DEFAULT CTOR ok
    std::string name;
    std::string rank;
    std::string breathing;
    bool status;

    void setName(std::string name); // always put something in the parameter, bc thats how you set the object you want ok
    void setRank(std::string rank); //declarations ok
    void setBreating(std::string breathing);
    void setStatus(bool status);

    void getName() const; //getters will always have a const after, to let compiler know not to modify it ok
    void getRank() const;
    void getBreathing() const;
    void getStatus() const;

    void hashiraInfo(); // will just print, not return ok

    private:
    std::string name_;
    std::string rank_;
    std::string breathing_;
    bool status_;
};

#endif