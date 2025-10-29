#include "characters.h"
#include <iostream>

// these are function definitions ok

character::character() {
    name_ = "unknown";
    rank_ = "unknown";
    breathing_ = "unknown";
    status_ = "unknown";
}
character::character(std::string name, std::string rank) {
    name_ = name;
    rank_ = "unknown";
    breathing_ = "unknown";
    status_ = "unknown";
}
character::character(std::string name, std::string rank) {
    name_ = name;
    rank_ = rank;
    breathing_ = "unknown";
    status_ = "unknown";
}
character::character(std::string name, std::string rank, std::string breathing) {
    name_ = name;
    rank_ = rank;
    breathing_ = breathing;
    status_ = "unknown";
}

character::character(std::string name, std::string rank, std::string breathing, bool status) {
    name_ = name;
    rank_ = rank;
    breathing_ = breathing;
    status_ = status;

    void hashiraInfo() { // just printing ok
        std::string lol;
        if (status) {
            lol = "Alive, damn lol good luck\n";
        } else {
            lol = "Dead.... LOLLL UR HASHIRA SUCKKKS\n";
        }
        std::cout << "Demon slayer member corps records..." << std::endl;
        std::cout << "NAME: " << name << "\nRANK: " << rank << "\nBreathing: " << breahing << "\nAlive?: " << lol;

    }


    void displayAll(){

    }
}