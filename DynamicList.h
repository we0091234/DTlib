#ifndef _DYMIC_H
#define _DYMIC_H
#include "seqList.h"
namespace DTLib
{
    template<typename T>
    class DynamicList:public seqList<T>
    {
        protected:
        int m_capicity;
        public:
        DynamicList(int capacity)
        {
            this->m_array = new T[capacity];
            if(this->m_array)
            {
                 this->m_capicity =capacity;
                 this->m_length = 0;
            }
            else
            {
               THROW_EXCEPTION(ArithmeticException,"no enough memory");
            }
        }
        void resize(int  newCap)
        {
            if(newCap!=this->m_capicity)
            {
                int length = this->m_length<newCap?this->m_length:newCap;
                T  *newArray = new T[m_capicity];
                if(newArray)
                {
                for(int i = 0; i<this->m_length; i++)
                {
                    newArray[i]=this->m_array[i];
                }
                T *tmp =this-> m_array;
               this-> m_array =newArray;
               this-> m_length = length;
              this->  m_capicity = newCap;
                delete [] tmp;
                }
                else
                {
                     THROW_EXCEPTION(ArithmeticException,"no enough memory");
                }
            }
        }
        int capacity() const
        {
            return this->m_capicity;
        }

        ~DynamicList()
        {
            delete [] this->m_array;
        }
    };
}

#endif