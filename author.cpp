#ifndef AUTHOR
#define AUTHOR
#include <iostream>
#include <string>
using namespace std;


class Author{
    private:
    string name;
    string surname;
    public:
    Author(string name, string surname):name(name), surname(surname){};
    string toString(){
        return name + " " + surname;
    }
    string getname{
        return name;
    };
    string surname{
        return surname;
    };
    void print(){
        cout << name << " " << surname << endl;
    };
};
#endif