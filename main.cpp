//     TITLE:             Lab 3 - Overloading Operators
//     FILENAME:          main.cpp
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  November 14, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS



#include "Vector.h"


int main() {
    cout.setf(std::ios::boolalpha);
    
    
    

    
    Vector A(1.0,0.0,0.0);
    Vector B(0.0,1.0,0.0);
    Vector C(0.0,0.0,1.0);
    cout << "Vector A: " << A << endl;
    cout << "Vector B: " << B << endl;
    cout << "Vector C: " << C << endl << endl;
    cout << "A * B = " << (A * B) << endl;
    cout << "A ^ B = " << (A ^ B) << " " << (A^B).mag()<< endl; // Why does this need to be in parenthesis?
    cout << "B ^ A = " << (B ^ A) << (B^A).mag() << endl<< endl;
    
    A = A * 3.27;
    cout << "A * 3.27 = A " << A <<"-> "<< A.mag() <<endl;
    B = B + 4.5;
    cout << "B + 4.5  = B " << B <<"-> "<< B.mag() << endl;
    C = C - 1.36;
    cout << "C - 1.36 = C " << C  <<"-> "<< C.mag() << endl;
    Vector D;
    D = A - B;
    cout << "A - B    = D " << D <<"-> "<< D.mag()<< endl ;

    cout << "           A " << A <<"-> "<<A.mag()<< endl;
    cout << "           B " << B <<"-> "<<B.mag()<< endl ;

    Vector E;
    E = B + C;
    cout << "B + C    = E " << E <<"-> "<< E.mag() << endl;
    
    cout << "           B " << B << "-> " << B.mag() << endl;
    cout << "           C " << C << "-> " << C.mag() << endl ;
    
    cout << "D * E    =   " << D * E << endl;
    
    cout << "           D " << D << "-> " << D.mag() << endl;
    cout << "           E " << E << "-> " << E.mag() << endl;
    
    cout << "D * E    =   " << (D ^ E) << endl ;
    
    cout << "           D " << D << "-> " << D.mag() << endl;
    cout << "           E " << E << "-> " << E.mag() << endl;
  
    cout << "-E       =   " << -E << endl;
    
    Vector UE;
    double num = E.mag();
    UE =  E / num;
    cout << "unit VecE =  " << UE <<"-> "<< UE.mag() << endl << endl;
    
    cout << "A == B is " << (A == B) << endl;
    
    cout << "D <  E is " << (D < E) << endl << endl;
    
    A = B = C = Vector(1.5, 2.5, 3.5);
    cout << "A = B = C = [1.5, 2.5, 3.5]" << endl << endl;
    
    cout << "A == B is " << (A == B) << endl;
    cout << "B == C is " << (B == C) << endl;
    cout << "C == [1.5, 2.5, 3.5] is " << (C == Vector(1.5, 2.5, 3.5)) << endl << endl;
    

    return 0;
}




//Vector A: [1,0,0]
//Vector B: [0,1,0]
//Vector C: [0,0,1]
//
//A * B = 0
//A ^ B = [0,0,1] 1
//B ^ A = [0,0,-1]1
//
//A * 3.27 = A [3.27,0,0]-> 3.27
//B + 4.5  = B [4.5,5.5,4.5]-> 8.4113
//C - 1.36 = C [-1.36,-1.36,-0.36]-> 1.95673
//A - B    = D [-1.23,-5.5,-4.5]-> 7.212
//A [3.27,0,0]-> 3.27
//B [4.5,5.5,4.5]-> 8.4113
//B + C    = E [3.14,4.14,4.14]-> 6.6437
//B [4.5,5.5,4.5]-> 8.4113
//C [-1.36,-1.36,-0.36]-> 1.95673
//D * E    =   -45.2622
//D [-1.23,-5.5,-4.5]-> 7.212
//E [3.14,4.14,4.14]-> 6.6437
//D * E    =   [-4.14,-9.0378,12.1778]
//D [-1.23,-5.5,-4.5]-> 7.212
//E [3.14,4.14,4.14]-> 6.6437
//-E       =   [-3.14,-4.14,-4.14]
//unit VecE =  [0.472628,0.623146,0.623146]-> 1
//
//A == B is false
//D <  E is false
//
//A = B = C = [1.5, 2.5, 3.5]
//
//A == B is true
//B == C is true
//C == [1.5, 2.5, 3.5] is true
//
//Program ended with exit code: 0











