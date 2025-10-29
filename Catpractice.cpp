#include <iostream>
#include <string>
using namespace std;

class Cat {
private:
    string name;
    string breed;
    string color;
    int age;

public:



    Cat(string name = "no name", string breed = "unknown", string color = "unknown", int age = 0){ //DEFAULT CTOR
        this->name = name;
        this->breed = breed;
        this->color = color;
        this->age = age;
    }



    string getName(){
        return name;
    }
    string getBreed(){
        return breed;
    }
    string getColor(){
        return color;
    }
    int getAge(){
        return age;
    }



    void setName(string name){
        this->name = name;
    }
    void setBreed(string breed){
        this->breed = breed;
    }
    void setColor(string color){
        this->color = color;
    }
    void setAge(int age) { 
        this->age = age;
    }



    void compareName(Cat other){
        if(this->name == other.name){
            cout << "They are both named " << this->name << endl;
        }
    }

    void compareBreed(Cat other){
        if(this->breed == other.breed){
            cout << "They are both " << this->breed << " cats." << endl;
        }
    }

    void compareColor(Cat other){
        if(this->color == other.color){
            cout << "They are both " << this->breed << " colored cats." << endl;
        }
    }

    void compareAge(Cat other){
        if(this->age == other.age){
            cout << "They are both " << this->age << " years old." << endl;
        }
    }

    bool catsEqual(Cat other){
        if((this->name == other.name) && (this->breed == other.breed) && (this->color == other.color) && (this->age == other.age)){
            return true;
        }
        return false;
    }

    void dupCat(Cat other){
        this->name = other.name;
        this->breed = other.breed;
        this->color = other.color;
        this->age = other.age;
    }



    void catInfo() {
        cout << "Cat Info:" << endl;
        cout << "  Name: " << name << endl;
        cout << "  Breed: " << breed << endl;
        cout << "  Color: " << color << endl;
        cout << "  Age: " << age << " years" << endl;
    }

    void bothInfo(Cat other){
        cout << this->name << " is a " << this->color << " " << this->breed << " and is "
        << this->age << "years old, while " << other.name << " is a " << other.color
        << " " << other.breed << " and is " << other.age << "years old" << endl;
    }


};

int main(){

    int choice = 0;
    int amount = 0;

    Cat Kuro("Kuro", "Scottish Fold", "light grey", 5);
    Cat Kami("Kami", "Scottish Fold", "white", 3);
    Cat Perry("Perry", "Russian Blue", "dark grey", 13);
    Cat Ace("Ace", "idk", "grey and white", 13);
    Cat Sam("Sam", "Sams club", "blue", 12);

    cout << Kuro.getName() << endl;

    Kuro.bothInfo(Kami);

    Kuro.bothInfo(Sam);

    Sam.dupCat(Kuro);
    
    Kuro.bothInfo(Sam);


    return 0;
}
