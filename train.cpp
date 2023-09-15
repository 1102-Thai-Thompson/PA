template <typename itemType>
Train<itemType>::Train():itemTypeArr(itemTypeArr[5]){
    numItems = 0;
    totalCargoWeight = 0;
    nextDestination = "Narnia";
}
template <typename itemType>
Train<itemType>::Train(int ni, int tcw, string nd, itemType* ita){
    numItems = ni;
    totalCargoWeight = tcw;
    nextDestination = nd;
    for(int i = 0; i < numItems; i++){
        itemTypeArr[i] = ita[i];
    }
}
template <typename itemType>
Train<itemType>::Train(const Train& rhs){
    numItems = rhs.numItems;
    totalCargoWeight = rhs.totalCargoWeight;
    nextDestination = rhs.nextDestination;
    for(int i = 0; i < numItems; i++){
        itemTypeArr[i] = rhs.itemTypeArr[i];
    }
}
template <typename itemType>
itemType Train<itemType>::getItemTypeArr(){
    return itemTypeArr;
}
template <typename itemType>
int Train<itemType>::getNumItems(){
    return numItems;
}
template <typename itemType>
int Train<itemType>::TotalCargoWeight(){
    int totalWeight = 0;
    for(int i = 0; i < numItems; i++){
        totalWeight = itemTypeArr[i] + totalWeight;
    }
    return totalWeight;
}
template <typename itemType>
string Train<itemType>::getNextDestination(){
    return nextDestination;
}
template <typename itemType>
void Train<itemType>::setNextDestination(string ND){
    nextDestination = ND;
}
template <typename itemType>
void Train<itemType>::load(itemType theItem){
    itemTypeArr[numItems] = theItem;
    numItems++;
}
template <typename itemType>
itemType Train<itemType>::unload(){
    if(numItems == 0){
        cout << "Can't unload any more" << endl;
    }else{
        numItems--;
        return itemTypeArr[numItems];
    }
}
template <typename itemType>
void Train<itemType>::emptyAllItems(){
    numItems = 0;
}
template <typename itemType>
void Train<itemType>::move(){
    cout << "Cargo has arrived somewhere else" << endl;
}
template <typename itemType>
void Train<itemType>::areEmpty(){
    if(numItems == 0){
        cout << "Someone stole the Cargo!!" << endl;
    }else{
       int itemAmount = howManyItems();
       cout << "No one stole the cargo there are still " << itemAmount << " Cargo Items" << endl;
    }
}
template <typename itemType>
int Train<itemType>::howManyItems(){
    int items = numItems;
    return items;
}
