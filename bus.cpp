template <typename itemType>
Bus<itemType>::Bus():itemTypeArr(itemTypeArr[5]){
    numItems = 0;
    fare = 0;
    nextDestination = "Narnia";
}
template <typename itemType>
Bus<itemType>::Bus(int ni, int f, string ND, itemType* ita){
    numItems = ni;
    fare = f;
    nextDestination = ND;
    for(int i = 0; i < numItems; i++){
        itemTypeArr[i] = ita[i];
    }
}
template <typename itemType>
Bus<itemType>::Bus(const Bus& rhs){
    numItems = rhs.numItems;
    fare = rhs.fare;
    nextDestination = rhs.nextDestination;
    for(int i = 0; i < numItems; i++){
        itemTypeArr[i] = rhs.itemTypeArr[i];
    }
}
template <typename itemType>
itemType Bus<itemType>::getItemTypeArr(){
    return itemTypeArr;
}
template <typename itemType>
int Bus<itemType>::getNumItems(){
    return numItems;
}
template <typename itemType>
int Bus<itemType>::getFare(){
    return fare;
}
template <typename itemType>
int Bus<itemType>::fareTotal(){
    return fare * numItems;
}
template <typename itemType>
string Bus<itemType>::getNextDestination(){
    return nextDestination;
}
template <typename itemType>
void Bus<itemType>::setFare(int fr){
    fare = fr;
}
template <typename itemType>
void Bus<itemType>::setNextDestination(string nd){
    nextDestination = nd;
}
template <typename itemType>
void Bus<itemType>::sortPeople(){
itemType tempItemArr[numItems];
    for(int o = 0; o < numItems - 1; o++){
        for(int i = 0; i < numItems - o - 1; i++){
            if(itemTypeArr[i] > itemTypeArr[i + 1]){
                //Glad I saved the bubble sorting from last time
                //sorts people by height
                tempItemArr[i] = itemTypeArr[i];
                itemTypeArr[i] = itemTypeArr[i + 1];
                itemTypeArr[i + 1] = tempItemArr[i];
        
            }
        }
    }
}
template <typename itemType>
void Bus<itemType>::load(itemType theItem){
    itemTypeArr[numItems] = theItem;
    numItems++;
}
template <typename itemType>
itemType Bus<itemType>::unload(){
    if(numItems == 0){
        cout << "Can't unload any more" << endl;
    }else{
        numItems--;
        return itemTypeArr[numItems];
    }
}
template <typename itemType>
void Bus<itemType>::emptyAllItems(){
    numItems = 0;
}
template <typename itemType>
void Bus<itemType>::move(){
    cout << "You have arrived somewhere else" << endl;
}
template <typename itemType>
void Bus<itemType>::areEmpty(){
    if(numItems == 0){
        cout << "Someone stole the People!!" << endl;
    }else{
       int itemAmount = howManyItems();
       cout << "No one stole the People there are still " << itemAmount << " people here!" << endl;
    }
}
template <typename itemType>
int Bus<itemType>::howManyItems(){
    int items = numItems;
    return items;
}