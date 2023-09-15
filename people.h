#ifndef PEOPLE_H
#define PEOPLE_H
#include <iostream>
using namespace std;
class People{
    private:
        string name;
        int height;
    public:
        People();
        People(string, int);
        People(const People&);
        int operator>(const People&);

        string getName();
        int getHeight();

        void setName(string);
        void setHeight(int);
};
#endif