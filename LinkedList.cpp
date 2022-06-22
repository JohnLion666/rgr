#include "LinkedList.h"
// #include <iostream>

template<typename type>
LinkedList<type>::LinkedList(){
    counter = 0;
    first = nullptr;
}
template<typename type> 
void LinkedList<type>::add2end(type _data){
    if(first == nullptr){
        this->first = new element<type>(_data, nullptr, nullptr);
        this->last = this->first;
        this->counter++;
    }else{
        this->counter++;
        element<type> * now = this->last;
        element<type>* a = new element<type>(_data, nullptr, now);
        
        this->last = a;
    }
}
template<typename type> 
void LinkedList<type>::add2start(type _data){
    // if()
}
template<typename type>
void LinkedList<type>::add2pos(type _data, int pos){

}












template<typename type>
LinkedList<type>::~LinkedList(){
}