#include "Object.h"
#include <iostream>
using namespace std;

namespace DTLib
{
void * Object::operator new(size_t size) throw()
{
     cout<<"object new:"<<endl;
   return malloc(size);
}
void Object::operator delete(void *p) throw()
{
     cout<<"object delete:"<<p<<endl;
    free(p);
}
void* Object::operator new[](size_t size) throw()
{
    return malloc(size);
}
void Object::operator delete[](void *p) throw()
{
    cout<<"delete[]"<<endl;
    free (p);
}
Object::~Object()
{

}
}
