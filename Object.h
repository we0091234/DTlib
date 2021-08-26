#ifndef _OBJECT_H
#define _OBJECT_H
#include <memory>
namespace DTLib
{

class Object
{
   public :
      void * operator new(size_t size);
      void operator delete(void *p);
       void * operator new[](size_t size);
      void operator delete[](void *p);

      virtual ~Object();
 
};
}


#endif