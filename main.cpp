#include "smartpointer.h"
// #include <iostream>
#include <cstdlib>
using namespace std;
using namespace DTLib;

class Test 
{
    public:
    Test()
    {
        cout<<"构造函数调用"<<endl;
    }
    ~Test()
    {
        cout<<"析构函数调用"<<endl;
    }
};


int main()
{
    // Test *p = new Test();
    // SmartPointer<Test> hah
    SmartPointer<Test> sma=new Test();
    SmartPointer<Test> newsma;
    newsma=sma;
    cout<<"小雷是人才"<<endl;
    cout<<sma.isNull()<<endl;
    cout<<newsma.isNull()<<endl;
    return 0;
}