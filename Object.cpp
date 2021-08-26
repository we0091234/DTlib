#include "Object.h"
#include <iostream>
#include <cstdlib>

using namespace std;

namespace DTLib
{
void * Object::operator new(size_t size)
{
     cout<<"object new:"<<endl;
   return malloc(size);
}
void Object::operator delete(void *p)
{
     cout<<"object delete:"<<p<<endl;
    free(p);
}
void* Object::operator new[](size_t size)
{
    return malloc(size);
}
void Object::operator delete[](void *p)
{
    cout<<"delete[]"<<endl;
    free (p);
}
Object::~Object()
{

}
}
