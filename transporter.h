
#ifndef TRANSPORTER_H
#define TRANSPORTER_H

#include <iostream>
using namespace std;
template <typename itemType>

class Transporter{
    public:
        virtual void load() = 0;
        virtual void unload() = 0;
        virtual void emptyAllItems() = 0;
        virtual void move() = 0;
        virtual void areEmpty() = 0;
        virtual void howManyItems() = 0;

};
#endif