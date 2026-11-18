#include "FIFO.hpp"

string FIFO::selectVictim(const CacheData&entries)const{
    if (entries.empty()){
        return "";
    }

    string victimKey = "";
    int minOrder = 0;

    for (const auto& item : entries){

        int order = item.second.getInsertionOrder();
        if (victimKey == ""|| order < minOder){
            minOrder = order;
            victimKey = item.first;
        }
    }
    return victimKey;
}