// #include "smartpointer.h"
// #include "Exception.h"
// // #include <iostream>
// #include <cstdlib>
// using namespace std;
// using namespace DTLib;

// class Test 
// {
//     public:
//     Test()
//     {
//         cout<<"构造函数调用"<<endl;
//     }
//      void show()
//     {
//         cout<<"you are shabi"<<endl;
//     }
//     ~Test()
//     {
//         cout<<"析构函数调用"<<endl;
//     }
   
// };

// float divedeMy(float a,float b)
// {
//     if (abs(b)<0.000000001)
//     {
//         THROW_EXCEPTION(ArithmeticException,"divide by zero");
//     }
//     else
//     return a/b;
// }
// int main()
// {
//     try
//     {
//            float result = divedeMy(2,0);
//            cout<<result<<endl;
            
//     }
//     catch(Exception &e)
//     {
//         cout<<e.message()<<endl;
//         cout<<e.location()<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <memory>
#include "Object.h"
using namespace std;
using namespace DTLib;
class A:public Object
{
    public:
    A()
    {
        cout<<"构造函数"<<endl;
    }
    ~A()
    {
        cout<<"析构函数"<<endl;
    }
    int i;
};

int main()
{
//    auto ptr = make_shared<A>;
   // A *ptr1 = new A();
   Object *pa = new A[10];
   delete [] pa;
    return 0;
}
