#include <iostream>
#include "LinkedList.cpp"


int main(){
    LinkedList<int> myList;
    myList.add2end(4);
    myList.add2end(5);
    myList.add2end(6);
    std::cout<<myList.first->prev<<'\n';
    std::cout<<myList.last->next<<'\n';

    std::cout<<myList.counter<<'\n';
}