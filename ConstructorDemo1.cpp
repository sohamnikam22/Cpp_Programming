#include<iostream>
using namespace std;

// Encapsulation
class Marvellous
{
    // Access specifier
    public:
    int No1, No2;   // Characsteristics
    

    // Default Constructor
    Marvellous()
    {
        cout<<"Inside Default Constructor\n";
        No1 = 0;
        No2 = 0;
    }
    
    // Parametrized Constructor
    Marvellous(int A, int B)
    {
        cout<<"Inside Parametrized Constructor\n";
        No1 = A;
        No2 = B;
    }
     
    // copy constructor
    Marvellous(Marvellous &ref)
    {
       
        cout<<"Inside copy constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;


    }
    // Destructor
    ~Marvellous()
    {
        cout<<"Inside Destructor\n";

    }


};

int main()
{
    cout<<"Inside main\n";
    Marvellous mobj1();            // Default Constructor
    Marvellous mobj2(11,21);       // Parametrized constructor
    Marvellous mobj3(mobj2);       // Copy constuctor
    
    cout<<"End of main\n"; 
    return 0;
}  // All Destructors gets called
