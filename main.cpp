#include <iostream>
#include "LinkedList.cpp"


int main(){
    LinkedList<int> myList;
    myList.add2end(4);
    myList.add2end(5);
    myList.add2end(6);
    myList.add2begin(1);
    myList.add2pos(2, 2);
    // std::cout<<myList.first->prev<<'\n';
    // std::cout<<myList.last->next<<'\n';

    std::cout<<myList.counter<<'\n';
    myList.show();
}