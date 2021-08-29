#ifndef _OBJECT_H
#define _OBJECT_H
#include <cstdlib>
namespace DTLib
{

class Object
{
   public :
      void * operator new(size_t size) throw();
      void operator delete(void *p) throw();
       void * operator new[](size_t size) throw();
      void operator delete[](void *p) throw();

      virtual ~Object();
};
}


#endif