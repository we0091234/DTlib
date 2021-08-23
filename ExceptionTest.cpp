#include <iostream>
#include <math.h>
using namespace std;

float divideMy(float a,float b)
{
    if (abs(b)<0.00000000001)
    throw 0;
    else
    return a/b;
}
void Demo1()
{
    try
    {
        throw "haha";
    }
    catch(int i )
    {
        cout<<"catch(int i)"<<endl;
    }
      catch(double d )
    {
        cout<<"catch(double d)"<<endl;
    }
      catch(char c )
    {
        cout<<"catch(char c)"<<endl;
    }
    catch (...)
    {
        cout<<"eerror "<<endl;
    }
    
    
}

int main(int argc, char** argv)
{
    float result ;
    try
    {
           result =divideMy(1,1);
            
    }
    catch(...) 
    {
        cout<<"divide 0 error"<<endl;
    }

    Demo1();
   
}