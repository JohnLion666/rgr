#include "element.h"


template <typename type> class LinkedList{
        

    public:

        element<type>* first;
        element<type>* last;
        int counter;
        LinkedList();
        ~LinkedList();
        void add2end(type data);
        void add2start(type data);
        void add2pos(type data, int cout);


        void show();
};

