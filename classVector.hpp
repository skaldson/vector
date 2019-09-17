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
    int SIZE;
    int CAPACITY;
    int *arr;
    void allocateMemory();
    bool isValid(int);
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
int at(int);
int  operator[] (int);
MyVector& operator=(MyVector const &sighVector);
};

void keepWindowOpen();


#endif
