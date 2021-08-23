#ifndef _EXCEPTION_H
#define _EXCEPTION_H
#include <cstring>
#include <iostream>

namespace DTLib
{
    #define THROW_EXCEPTION(e,m)(throw e(m,__FILE__,__LINE__))
class Exception
{
    protected:
    char *m_message;
    char *m_location;
    void init(const char *message, const char *file,int line);
    public:
    Exception(const char *message);
    Exception(const  char *file,int line);
    Exception(const char *message,const char *file,int line);
    Exception(const Exception &e);
    Exception & operator=(const Exception &e);
    virtual  const char *message() const;
    virtual const char *location() const;
    virtual ~Exception()=0;

};

class ArithmeticException : public Exception
{
    public:
    ArithmeticException():Exception(NULL,NULL,0){}

};
}


#endif