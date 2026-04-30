#include<iostream>
using namespace std;

class Base
{
    public: 
        int i,j;

        void fun()
        { cout<<"Inside Base fun\n"; }

        virtual void gun()
        { cout<<"Inside Base gun\n"; }

        virtual void sun()
        { cout<<"Inside Base sun\n"; }
};                                                 // 8 bytes

class Derived : public Base
{
    public: 
        int x,y;

        void fun()                                 // redefinition
        { cout<<"Imside Derived fun\n"; }

        void sun()                                 // redefinition
        { cout<<"Imside Derived sun\n"; }

        virtual void run()                                 // definition
        { cout<<"Imside Derived run\n"; }
};                                                  // 16 bytes


int main()
{
    Base *bp = new Derived();              // upcasting

    bp->fun();            // Base fun
    bp->gun();            // Base gun
    bp->sun();            // Derived sun
    // bp->run();            // Error
    

    return 0;
}