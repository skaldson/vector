#include "classVector.hpp"

int main()
{
    MyVector vec;
    vec.push(1);
    vec.push(2);
    vec.push(3);
    
    vec.printVector();
    
    MyVector temp=vec;
    
    vec.printVector();
    
    MyVector list{1,2,3,4,5};
    
    for(int i=0;i<list.size();i++)
        std::cout<<list[i]<<" ";
    
    keepWindowOpen();
    return 0;
}

