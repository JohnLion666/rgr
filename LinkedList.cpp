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
    if(this->counter >pos-1){
        int counter=0;
        element<type> *current = this->first;
        while (counter<pos-1){
            counter++;
            current = current->next;
        }
        element<type>* next = current->next;
        
        current->next = new element<type>(_data, next,nullptr);
        this->counter++;
    }else{
        std::cerr<<"Exception! out of range adding to pos "<<pos<<" data "<<_data<<"\n";
        std::cerr<<"Addin element at the end of list\n";
        add2end(_data);
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