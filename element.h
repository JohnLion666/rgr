template<typename type>
class element
{
public:
    type data;
    element* next;
    element* prev;
    element(type data, element* next, element* prev){
        this->data = data;
        this->next = next;
        this->prev = prev;
    };
    ~element(){};
};



