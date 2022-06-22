#include <iostream>

struct LinkedList
{
    
    LinkedList(std::string str, LinkedList *_next, LinkedList *_prev){
        std::string data=str;
        LinkedList* next = _next;
        LinkedList* prev = _prev;
    };
    LinkedList(int num, LinkedList *_next, LinkedList *_prev){
        int data = num;
        LinkedList* next = _next;
        LinkedList* prev = _prev;
    };
    LinkedList(double number, LinkedList *_next, LinkedList *_prev){
        double data = number;
        LinkedList* next = _next;
        LinkedList* prev = _prev;
    };
    
};
 LinkedList* first;
// LinkedList* last;
void addEllement(std::string, LinkedList*);

void addEllement(int, LinkedList*);

void addEllement(double, LinkedList*);