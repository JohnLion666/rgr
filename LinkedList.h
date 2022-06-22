#include "element.h"


template <typename type> class LinkedList{
        

    public:

        element<type>* first;
        element<type>* last;//not using
        int counter;//not visible, but suddenly the user wants to know the length of list
        LinkedList();
        ~LinkedList();
        void add2end(type data);
        void add2begin(type data);
        void add2pos(type data, int pos);


        void show();
};

