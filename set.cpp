#include <iostream>
#include <cassert>
#include "set.h"

using namespace std;

Set::Set():
    data(new int[INITIAL_SIZE]),
    size(0),
    maxSize(INITIAL_SIZE)
{}

Set::Set(const Set& ss):
    data(new int[ss.getSize()]),
    size(ss.getSize()),
    maxSize(ss.getSize())
{
    for (int i = 0; i < size; i++){
        data[i] = ss.data[i];
    }
}

Set::~Set(){
    delete[] data;
}

int Set::find(int number) const{
    for(int i =0; i <size; i++){
        if( data[i] == number ){
            return i;
        }
    }
    return NUMBER_NOT_FOUND;
}

bool Set::contains(int number) const {
   return ( (*this).find(number) != NUMBER_NOT_FOUND );
}

int Set::getSize() const{
    return size;
}

bool Set::add( int number ){
    if( this->contains(number) ){
        return false;
    }
    if( size >= maxSize ){
        expand();
    }
    this->data[size++] = number;
    return true;
}

void Set::expand() {
    int newSize = this->maxSize * EXPAND_RATE;
    int *newData = new int[newSize];
    for( int i = 0; i < this->size; i++ ){
        newData[i] = data[i];
    }
    delete[] data;
    this->data = newData;
    this->size = newSize;
}

bool Set::remove(int number){
    int index = find(number);
    if(index !=  NUMBER_NOT_FOUND){
        data[index] = data[--size];
        return true;
    }else{
        return false;
    }
}

Set& Set::uniteWith(const Set& ss){
    for(int i =0; i <ss.getSize(); i++){
        this->add(ss.data[i]);
    }
    return *this;
}

Set& Set::intersectWith(const Set& ss){
    for (int i = 0; i < this->getSize(); i++){
        if(ss.contains(this->data[i])){
            continue;
        }else{
            this->remove(data[i]);
        }
    }

    return *this;
}

Set union1(const  Set& ss1, const Set& ss2){
    Set temp = ss1;
    return temp.uniteWith(ss2);
}

Set& Set::operator=(const Set& ss){
    if( this == &ss ){
        return *this;
    }

    delete[] data;
    data = new int[ss.size];
    size = ss.size;
    maxSize = ss.size;
    for(int i = 0; i < size; i++){
        data[i] = ss.data[i];
    }
    return *this;
}

Set::Iterator::Iterator(const Set* set, int index):
    set(set), index(index)
{}

const int& Set::Iterator::operator*() const{
    assert(index >= 0 && index < set->getSize());
    return set->data[index];
}

Set::Iterator& Set::Iterator:: operator++(){
    index ++;
    return *this;
}

Set::Iterator Set::Iterator:: operator++(int){ 
    //postfix
    Iterator result = *this;
    ++*this;
    return result;
}

Set::Iterator Set::begein() const{
    return Iterator(this,0);
}

Set::Iterator Set::end() const{
    return Iterator(this,this->getSize());
}

 bool Set::Iterator::operator==(const Iterator& it) const{
    assert(this->set == it.set);
    return (this->index == it.index);
 }


 bool Set::Iterator::operator!=(const Iterator& it) const{
    return !(*this == it);
 }

