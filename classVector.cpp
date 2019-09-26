#include "classVector.hpp"
#include <cassert>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <initializer_list>
#include <string.h>

void keepWindowOpen()
{
    std::cin.clear();
    std::cout<<"\nEnter any character\n";
    char ch;
    std::cin>>ch;
    return;
}

bool MyVector::isValid(int _index)
{
    return _index>=0&&_index<m_size;
}


MyVector::~MyVector()
{delete[]m_arr;}

MyVector::MyVector():m_size(0),m_capacity(5),m_arr(new int[m_size])  
{
    allocateMemory();
}

void MyVector::allocateMemory()
{
    int newCapacity=m_capacity*2;
    int *arr1=new int[newCapacity];
    if(m_arr)
    {
        memcpy(arr1,m_arr,sizeof(int)*newCapacity);
        for(int i=0;i<m_capacity;i++)
            m_arr[i]=0;
    }
    delete[]m_arr;
    m_arr=arr1;
    m_capacity=newCapacity;
    
}

void MyVector::push(int _num)
{
    if(m_size==m_capacity)
        MyVector::allocateMemory();
    else
        m_arr[m_size++]=_num;
}

void MyVector::pop()
{
    assert(m_size==0);
    
    m_arr[m_size--]=0;
}

void MyVector::printVector()
{
    for(int i=0;i<m_size;i++)
        std::cout<<m_arr[i]<<" ";
    std::cout<<std::endl;
}

int MyVector::size()
{
    return m_size;
}

bool MyVector::isEmpty()
{
    return (m_size==0)?true:false;
}

int& MyVector::at(int _index)
{
    assert(isValid(_index));
    
    return m_arr[_index];
}

int& MyVector::operator[](int _index)
{
    assert(isValid(_index));
    
    return m_arr[_index];
}

MyVector::MyVector(std::initializer_list<int> list):m_size(0),m_capacity(5) ,m_arr(nullptr)
{
    allocateMemory();
    
    for(auto it:list)
    {
        m_arr[m_size]=it;
        m_size++;
        
    }
}

MyVector::MyVector(const MyVector &destnVec)
{
    int *temp_ptr=new int;
    *temp_ptr=*destnVec.m_arr;
}

MyVector & MyVector::operator=(const MyVector &sighVector)
{
    int *temp_ptr=new int;
    *temp_ptr=*sighVector.m_arr;
    
    return *this;
}





























