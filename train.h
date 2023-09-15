
#ifndef TRAIN_H
#define TRAIN_H
#include "transporter.h"
template <typename itemType>

class Train: public Transporter<itemType>{
    private:
        itemType itemTypeArr;
        int numItems;
        int totalCargoWeight;
        string nextDestination;
    public:
        Train();
        Train(int, int, string, itemType*);
        Train(const Train&);

        itemType getItemTypeArr();
        int getNumItems();
        int TotalCargoWeight();
        string getNextDestination();

        void setNextDestination(string);

        void load(itemType) override;
        itemType unload() override;
        void emptyAllItems() override;
        void move() override;
        void areEmpty() override;
        int howManyItems() override;

};
#include "train.cpp"
#endif
