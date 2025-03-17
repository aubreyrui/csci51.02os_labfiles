#include <iostream>
#include <vector>

using namespace std;

struct Cat {
    int ageInMonths;
    float weight;
    string name;
    bool isGirl;
    double love;
};

int main(void) {
    // assigning values
    Cat myCat;
    myCat.ageInMonths = 5;
    myCat.name = "Dog";
    myCat.weight = 10.59f;
    myCat.isGirl = true;
    myCat.love = 123456789.987654321;

    // printing
    cout << "Name :" << myCat.name << endl;
    cout << "Age (in months) :" << myCat.ageInMonths << endl;
    cout << "Weight :" << myCat.weight << endl;
    cout << "Is cat a girl? " << myCat.isGirl << endl;
    cout << "Love: " << myCat.love << endl;

    // modifying
    myCat.isGirl = false;
    cout << "So, is cat a girl? " << myCat.isGirl << endl;

    // emptying
    myCat.love = 0;
    cout << "Updated Love: " << myCat.love << endl;

    return 0;

    /*
    How is it similar/different 
    or what is the advantage of using it 
    compared to your favorite programming language 
    (Java, Python, etc..)?

    Answer (Java classes vs C++ structs):
    They are similar when it comes to accessing, declaring, and modifying values, although in Java classes they are more robust because they need methods to define the behavior of the objects. 
    
   The advantage structs have is its simplicity to hold various data without the need to declare if it's public or private, while in Java you have to explicitly declare it. Because of that, structs are commonly used in dealing with data structures, while in Java it is used for Object Oriented Programming.

    */

}