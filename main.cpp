#include "smartpointer.h"
#include "Exception.h"
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
     void show()
    {
        cout<<"you are shabi"<<endl;
    }
    ~Test()
    {
        cout<<"析构函数调用"<<endl;
    }
   
};


int main1()
{
    // Test *p = new Test();
    // SmartPointer<Test> hah
    SmartPointer<Test> sma=new Test();
    SmartPointer<Test> newsma;
    newsma=sma;
    // cout<<"小雷是人才"<<endl;
    (*newsma).show();
    cout<<sma.isNull()<<endl;
    cout<<newsma.isNull()<<endl;
    return 0;
}

int main()
{
    try
    {
        THROW_EXCEPTION(Exception,"test");
    }
    catch(const Exception &e)
    {
        cout<<"catch Exception &e"<<endl;
        cout<<e.message()<<endl;
        cout<<e.location()<<endl;
    }
    return 0;
}