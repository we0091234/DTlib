#ifndef _SEQLIST_H_
#define _SEQLIST_H_
#include "List.h"
#include "Exception.h"
namespace DTLib
{
    template<typename T>
    class seqList:public List<T>
    {
       protected :
       T * m_array;   //顺序存储空间
       int m_length;  //当前线性表长度
       public:
       bool insert(int i,const T&e) 
       {
           bool ret = (i>=0) &&(i<=m_length);
           ret = ret&&(m_length<capacity());
           if(ret)
           {
               for(int j = m_length; j>i; j--)
                  m_array[j]=m_array[j-1];
                  m_array[i]=e;
                  m_length+=1;
           }
           return ret;
       }
       bool remove(int i ) 
       {
           bool ret = (i>=0)&&(i<m_length);
           if(ret)
           {
           for(int j = i; j<m_length-1; j++)
             m_array[j]=m_array[j+1];
             m_length-=1;
           }
            return ret;
       }
       bool set(int i ,const T &e)
       {
           bool ret = (i>=0)&&(i<m_length);
           if(ret)
           m_array[i]=e;
           return ret;
       }
       bool get(int i , T&e) const
       {
            bool ret = (i>=0)&&(i<m_length);
            if(ret)
            {
                e= m_array[i];
            }
            return ret;
           
       }
       int  length() const
       {
           return m_length;
       }
       void clear()
       {
           m_length=0;
       }
       //数组的实现方式 
       T& operator[](int i )
       {
           if((i>=0)&&(i<m_length))
           {
               return m_array[i];
           }
           else 
           {
               THROW_EXCEPTION(ArithmeticException,"i is not valibal");
           }
       }
       T operator[](int i) const
       {
           return (const_cast<seqList<T>&>(*this))[i];
       }

       virtual int capacity()const = 0;
       
    };
}


#endif 