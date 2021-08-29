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
#include "smartpointer.h"
#include "List.h"
#include "seqList.h"
#include "StaticList.h"
#include "DynamicList.h"
using namespace std;
using namespace DTLib;
void show(DynamicList<int> &l)
{
   for(int i = 0; i<l.length();i++)
   {
        cout<<l[i]<<" ";
   }
   cout<<endl;
}

int main()
{
//   StaticList<int ,5> l;
  DynamicList<int >l(5);
  for(int i = 0; i<5; i++)
  {
      l.insert(i,i);
  }
  show(l);
  l.remove(4);
  show(l);
  l.resize(10);
  l.insert(4,50);
  l.insert(5,60);
   l.insert(6,50);
  l.insert(7,60);
   l.insert(8,50);
   cout<<l.insert(9,60)<<endl;
  cout<< l.insert(10,60)<<endl;
 show(l);
    return 0;
}
