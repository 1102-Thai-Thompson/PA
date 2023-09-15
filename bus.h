
#ifndef BUS_H
#define BUS_H
#include "transporter.h"
template <typename itemType>

class Bus: public Transporter<itemType>{
    private:
        itemType itemTypeArr;
        int numItems;
        int fare;
        string nextDestination;
    public:
        Bus();
        Bus(int, int, string, itemType*);
        Bus(const Bus&);

        itemType getItemTypeArr();
        int getNumItems();
        int getFare();
        string getNextDestination();

        void sortPeople();
        void setNextDestination(string);
        void setFare(int);
        int fareTotal();
        void load(itemType) override;
        itemType unload() override;
        void emptyAllItems() override;
        void move() override;
        void areEmpty() override;
        int howManyItems() override;

};
#include "bus.cpp"
#endif

