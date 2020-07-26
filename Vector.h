//     TITLE:             Lab 3 - Overloading Operators
//     FILENAME:          Vector.h
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  November 14, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS


#ifndef Vector_h
#define Vector_h
#include <cmath>
#include <iostream>
using namespace std;

class Vector
{
    //friend operator prototype
    friend Vector operator * (double LHS, const Vector & RHS);
    friend ostream& operator << (ostream& os, const Vector & RHS);
    friend Vector operator + (double LHS, const Vector & RHS);
    friend Vector operator - (double LHS, const Vector & RHS);
    friend Vector operator - (const Vector & RHS);
    friend bool operator < (const Vector & LHS , const Vector & RHS);
    
    friend Vector  & operator++(const Vector & RHS);
    
public:
    Vector();
    Vector(double inx, double iny, double inz);
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);
    double getX() const;
    double getY() const;
    double getZ() const;
    double mag();
   
    
    
    
    
    
    //Vector(double in X, double in Y)
    
    Vector operator^(const Vector & RHS);
    
    double operator*(const Vector & RHS);
    
    Vector operator*(const double & RHS);
    
    Vector operator+(const Vector & RHS);
    
    Vector operator+(const double & RHS);
    
    Vector operator-(const double & RHS);
    
    Vector operator/(double & RHS);
    
    Vector operator/(int & RHS);
    
    bool operator==(const Vector & RHS);
    
    Vector operator-(const Vector & RHS);
    
    bool operator < (Vector & RHS);
    
    
    
    
    
    
    
    
private:
    double x,
           y,
           z;

};




















#endif /* Vector_h */
