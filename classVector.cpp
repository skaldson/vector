#include "classVector.hpp"

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
    return _index>=0&&_index<SIZE;
}


MyVector::~MyVector()
{delete[]arr;}

MyVector::MyVector()
:SIZE(0)
    ,CAPACITY(10)  
{
    arr=new int[CAPACITY];
    for(int i=0;i<CAPACITY;i++)
        arr[i]=0;
}

void MyVector::allocateMemory()
{
        int newCapacity=CAPACITY*2;
        int *arr1=new int[newCapacity];
        if(arr)
            memcpy(arr1,arr,sizeof(int)*newCapacity);
        delete[]arr;
        arr=arr1;
        CAPACITY=newCapacity;
}

void MyVector::push(int _num)
{
    if(SIZE==CAPACITY)
        MyVector::allocateMemory();
    else
        arr[SIZE++]=_num;
}

void MyVector::pop()
{
    assert(SIZE==0);
    
    arr[SIZE--]=0;
}

void MyVector::printVector()
{
    for(int i=0;i<SIZE;i++)
        std::cout<<arr[i]<<" ";
}

int MyVector::size()
{
    return SIZE;
}

bool MyVector::isEmpty()
{
    return (SIZE==0)?true:false;
}

int MyVector::at(int _index)
{
    assert(isValid(_index));
    
    return arr[_index];
}

int MyVector::operator[](int _index)
{
    assert(isValid(_index));
    
    return arr[_index];
}

MyVector::MyVector(std::initializer_list<int> list)
:SIZE(0)
    ,CAPACITY(5)  
        ,arr(nullptr)
{
    allocateMemory();
    
    for(auto it:list)
    {
        arr[SIZE]=it;
        SIZE++;
        
    }
}

MyVector::MyVector(const MyVector &destnVec)
{
    int *temp_ptr=new int;
    *temp_ptr=*destnVec.arr;
}

MyVector & MyVector::operator=(const MyVector &sighVector)
{
    int *temp_ptr=new int;
    *temp_ptr=*sighVector.arr;
    
    return *this;
}





























