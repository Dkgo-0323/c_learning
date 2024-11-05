#ifndef CLASS_MODULA_H
#define CLASS_MODULA_H


template<class T>
class Array{
    T* data;
    int size;
public:
    explicit Array(int size);
    Array(const Array& obj);
    ~Array();
    Array& operator=(const Array& obj);
    T& operator[](int index);
    const T& operator[](int index) const;
    int getSize() const;
    void array_print() const;

};

template<class T>
Array<T>::Array(int size):
    size(size), data(new T[size])
{}

template<class T>
Array<T>::Array(const Array& obj):
    data(new T[obj.size]),size(obj.size)
{
    for(int i = 0; i < size; ++i){
        data[i] = obj.data[i];
    }
}

template<class T>
Array<T>::~Array(){
    delete[] data;
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& obj){
    if(this == &obj){
        return *this;
    }
    delete[] data;
    size = obj.size;
    data = new T[size];
    for(int index = 0; index < size; ++index){
        data[index] = obj.data[index];
    }
    return *this;
}

template <class T>
T& Array<T>::operator[](int index){
    assert(index >= 0 && index < size);
    return data[index];
}

template <class T>
const T& Array<T>::operator[](int index) const{
    assert(index >= 0 && index < size);
    return data[index];
}

template<class T>
int Array<T>::getSize() const{
    return this->size;
}

template<class T>
void Array<T>::array_print() const{
    for(int i = 0; i<size; ++i){
        std::cout << this->data[i] << " " ;
    }
    std::cout << std::endl;
}



#endif