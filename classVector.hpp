#ifndef _CLASS_VECTOR_
#define _CLASS_VECTOR_

#include <cassert>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <initializer_list>
#include <string.h>

class MyVector
{
private:
    int m_size;
    int m_capacity;
    int *m_arr;
    void allocateMemory();
    bool isValid(int);
    union m_Array
    {
       int arr[10];
       int *arr_ptr;
    };
public:
    MyVector();
    MyVector(MyVector const &);//copy construct
    MyVector(std::initializer_list< int > list);
    ~MyVector();
    void push(int);
    void pop();
    void printVector();
    int size();
    bool isEmpty();
    int& at(int);
    int&  operator[] (int);
    MyVector& operator=(MyVector const &sighVector);
};

void keepWindowOpen();


#endif
