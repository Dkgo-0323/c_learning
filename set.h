#ifndef SET_H_
#define SET_H_
#include<string>

class Set {
public:
    Set();
    Set(const Set&);
    ~Set();

    bool add(int number);
    bool remove(int number);
    bool contains(int number) const;
    int getSize() const;

    Set& uniteWith(const Set&);
    Set& intersectWith(const Set&);

    std::string toString() const;

    Set& operator=(const Set& ss);

    class Iterator;

    Iterator begein() const;
    Iterator end() const;

private:
    int* data;
    int size;
    int maxSize;

    int find(int number) const;
    void expand();

    static const int EXPAND_RATE = 2;
    static const int INITIAL_SIZE = 10;
    static const int NUMBER_NOT_FOUND = -1;


};


Set union1(const  Set&, const Set&);
Set intersection(const Set&, const Set&);


class Set::Iterator{
    const Set* set;
    int index;
    Iterator(const Set* set, int index); //只有set可以利用constructor来构建iterator
    friend class Set;
public:
    const int& operator*() const;
    Iterator& operator++();
    Iterator operator++(int);

    bool operator==(const Iterator& it) const;
    bool operator!=(const Iterator& it) const;

    Iterator(const Iterator&) = default;
    Iterator& operator=(const Iterator&) = default;
};



#endif