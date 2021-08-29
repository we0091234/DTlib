#ifndef _STATICLIST_H_
#define _STATICLIST_H_

#include "seqList.h"

namespace DTLib
{
    template<typename T,int N>
    class StaticList:public seqList<T>
    {
        protected:
        T m_space[N];
        public:
        StaticList()
        {
            this->m_array = m_space;
            this->m_length = 0;
        }
        int capacity() const
        {
            return N;
        }

    };
}


#endif