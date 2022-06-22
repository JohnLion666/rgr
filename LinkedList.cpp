#include "LinkedList.h"
#include <iostream>

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
        element<type> * now = this->first;
        while (now->next!=nullptr){
            now = now->next;
        }
        now->next = new element<type>(_data, nullptr, nullptr);
                
    }
}
template<typename type> 
void LinkedList<type>::add2begin(type _data){
    if(first==nullptr){
        this->counter++;
        first = new element<type>(_data, nullptr, nullptr);
    }else{
        this->counter++;

        element<type> *now = this->first;
        first = new element<type>(_data, now, nullptr);
        
    }
}
template<typename type>
void LinkedList<type>::add2pos(type _data, int pos){
    try{
        int counter=0;
        element<type> *current = this->first;
        while (counter<pos)
        {
            current = current->next;
        }
        element<type>* next = current->next;
        element<type>* prev = current;
        prev->next = new element<type>(_data, next,nullptr);

    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';//скоріш за все буде  out of range list
    }
    
}


//out list in sout
template<typename type> 
void LinkedList<type>::show(){
    element<type> * current = first;
    while(current->next!=0){
        std::cout<<"data: "<<current->data<<"; next: "<<current->next<<"\n";
        current = current->next;
    }
    std::cout<<"data: "<<current->data<<"; next: "<<current->next<<"\n";
        
}












template<typename type>
LinkedList<type>::~LinkedList(){
}