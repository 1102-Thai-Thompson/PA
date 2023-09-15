#ifndef CARGO_H
#define CARGO_H
#include <iostream>
using namespace std;
class Cargo{
    private:
        string coal;
        string hay;
        int weight;
    public:
        Cargo();
        Cargo(string, string, int);
        Cargo(const Cargo&);
        int operator+(int);

        string getCoal();
        string getHay();
        int getWeight();

        void setCoal(string);
        void setHay(string);
        void setWeight(int);
};
#endif