#ifndef _SMARTPOINTER_H
#define _SMARTPOINTER_H
#include <iostream>
namespace DTLib
{
    template<typename T>
  class SmartPointer
  {
      protected:
      T * m_pointer;
      public:
      SmartPointer(T*p=NULL):m_pointer(p) 
      {

      }
      SmartPointer(const SmartPointer<T> &obj)  //只能有一个指针指向一个空间
      {
          m_pointer = obj.m_pointer;
          delete obj.m_pointer;
        const_cast<SmartPointer<T> &>(obj).m_pointer = NULL;
      }
      SmartPointer<T> & operator= (const SmartPointer<T> & obj) 
      {
          if (this !=&obj)
          {
              delete m_pointer;
             m_pointer = obj.m_pointer;
        const_cast<SmartPointer<T> &>(obj).m_pointer = NULL;
          }
          return *this;
      }

      T *operator->()
      {
          return m_pointer;
      }

      T &operator *()
      {
          return *m_pointer;
      }

      bool isNull()
      {
          return (m_pointer == NULL);
      }

      T *get()
      {
          return m_pointer;
      }

      ~SmartPointer()
      {
          delete m_pointer;
      }

  };
}

#endif