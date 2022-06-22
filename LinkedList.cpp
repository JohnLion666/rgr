
#include "LinkedList.h"

template<typename type>
LinkedList<type>::LinkedList(){
    counter = 0;
    first = nullptr;
}
template<typename type> void LinkedList<type>::add2end(type _data){
    if(first == nullptr){
        first = new element<type>(_data, nullptr, nullptr);
        counter++;
    }else{
        // new element<type>(_data, nullptr, prev);
    }
}













template<typename type>
LinkedList<type>::~LinkedList(){
}