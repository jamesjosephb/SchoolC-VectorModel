//     TITLE:             Lab 3 - Overloading Operators
//     FILENAME:          Vector.cpp
//     PREPARED FOR:      CS215
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  November 14, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS


#include "Vector.h"

Vector::Vector(): Vector(0,0,0){}
//Vector::Vector()
//{   x = 0;
//    y = 0;
//    z = 0;}
Vector::Vector(double inx, double iny, double inz)
{
    x = inx;
    y = iny;
    z = inz;
}
//--------------------------------------------------------------------------------

void Vector::setX(double newX)
{
    x = newX;
}
void Vector::setY(double newY)
{
    y = newY;
}
void Vector::setZ(double newZ)
{
    z = newZ;
}
double Vector::getX() const
{
    return x;
}
double Vector::getY() const
{
    return y;
}
double Vector::getZ() const
{
    return z;
}
//--------------------------------------------------------------------------------

double Vector::mag()
{
    return (sqrt(pow(x,2)+pow(y,2)+pow(z,2)));
}

//--------------------------------------------------------------------------------

Vector operator * (double LHS, const Vector & RHS)
{
    Vector SProd;
    SProd.x = LHS * RHS.x;
    SProd.y = LHS * RHS.y;
    SProd.x = LHS * RHS.z;
    return SProd;
}

//--------------------------------------------------------------------------------
Vector Vector::operator^(const Vector & RHS) //dot

{

    Vector CProd;

    CProd.x = y * RHS.z - z * RHS.y;
    CProd.y = z * RHS.x - x * RHS.z;
    CProd.z = x * RHS.y - y * RHS.x;

    return CProd;
}
//--------------------------------------------------------------------------------

ostream& operator << (ostream& os, const Vector & RHS)
{
    os << "[" << RHS.x << "," << RHS.y << "," << RHS.z << "]";
    return os;
}
//--------------------------------------------------------------------------------



//--------------------------------------------------------------------------------

double Vector::operator*(const Vector & RHS)
{
    double DProd;
    DProd = x * RHS.x + y * RHS.y + z * RHS.z;
    return DProd;
}

//--------------------------------------------------------------------------------

Vector Vector::operator*(const double & RHS)
{
    Vector Sprod;
    Sprod.x = x * RHS;
    Sprod.y = y * RHS;
    Sprod.z = z * RHS;
    return Sprod;
}
//--------------------------------------------------------------------------------
Vector Vector::operator+(const Vector & RHS)
{
    Vector Vadd;
    Vadd.x = x + RHS.x;
    Vadd.y = y + RHS.y;
    Vadd.z = z + RHS.z;
    return Vadd;
}
//--------------------------------------------------------------------------------
Vector Vector::operator+(const double & RHS)
{
    Vector Sadd;
    Sadd.x = x + RHS;
    Sadd.y = y + RHS;
    Sadd.z = z + RHS;
    return Sadd;
}
//--------------------------------------------------------------------------------
Vector operator + (double LHS, const Vector & RHS)
{
    Vector Sadd;
    Sadd.x = LHS + RHS.x;
    Sadd.y = LHS + RHS.y;
    Sadd.z = LHS + RHS.z;
    return Sadd;
}
//--------------------------------------------------------------------------------
Vector Vector::operator-(const double & RHS)
{
    Vector Ssub;
    Ssub.x = x - RHS;
    Ssub.y = y - RHS;
    Ssub.z = z - RHS;
    return Ssub;
}
//--------------------------------------------------------------------------------
Vector operator - (double LHS, const Vector & RHS)
{
    Vector Ssub;
    Ssub.x = LHS - RHS.x;
    Ssub.y = LHS - RHS.y;
    Ssub.z = LHS - RHS.z;
    return Ssub;
}
//--------------------------------------------------------------------------------
Vector Vector::operator-(const Vector & RHS)
{
    Vector Sub;
    Sub.x = x - RHS.x;
    Sub.y = y - RHS.y;
    Sub.z = z - RHS.z;
    return Sub;
    
    
}
//--------------------------------------------------------------------------------
Vector operator - (const Vector & RHS)
{
    Vector NegV;
    NegV.x = -1 * RHS.x;
    NegV.y = -1 * RHS.y;
    NegV.z = -1 * RHS.z;
    return NegV;
}
//--------------------------------------------------------------------------------
Vector Vector::operator/(double & RHS)
{
    while(RHS == 0)
    {
        cout << "The denominator cannot be a zero. Please enter a valid denominaotor below" << endl;
        cout << "New Denominator =";
        cin >> RHS;
    }
    
    
    Vector DivV;
    DivV.x = x / RHS;
    DivV.y = y / RHS;
    DivV.z = z / RHS;
    return DivV;
}

//--------------------------------------------------------------------------------
Vector Vector::operator/(int & RHS)
{
    while(RHS == 0)
    {
        cout << "The denominator cannot be a zero. Please enter a valid denominaotor below" << endl;
        cout << "New Denominator =";
        cin >> RHS;
    }
    
    
    Vector DivV;
    DivV.x = x / RHS;
    DivV.y = y / RHS;
    DivV.z = z / RHS;
    return DivV;
}

//--------------------------------------------------------------------------------

bool Vector::operator==(const Vector & RHS)
{
    if (x == RHS.x & y == RHS.y & z == RHS.z)
    {
        return true;
    }
    else
        return false;
}
//--------------------------------------------------------------------------------

//Vector operator^(const Vector & RHS)

//Vector Vector:: operator^ (const Vector & RHS)
//{
//    Vector cross;
//    cross.x = (y * RHS.z) - (z*RHS.y);
//    cross.y = (z * RHS.x) - (x*RHS.z);
//    cross.z = (x * RHS.y) - (y*RHS.x);
//    return cross;
//    
//    
//    A X B = [AY * BZ - AZ * BY, AZ * BX - AX * BZ, AX * BY - AY * BX]
//}
//--------------------------------------------------------------------------------
//A X B = [AX * BY - AY * BX]
//Vector Vector::operator-(const double & RHS)
//{
//    Vector Ssub;
//    Ssub.x = x - RHS;
//    Ssub.y = y - RHS;
//    Ssub.z = z - RHS;
//    return Ssub;
//}
////--------------------------------------------------------------------------------
//Vector operator - (double LHS, const Vector & RHS)
//{
//    Vector Ssub;
//    Ssub.x = LHS - RHS.x;
//    Ssub.y = LHS - RHS.y;
//    Ssub.z = LHS - RHS.z;
//    return Ssub;


bool Vector::operator < (Vector & RHS)
{
    return mag() < RHS.mag();
}




Vector  & operator++(const Vector & RHS)
{
    Vector newVector;
    newVector.x = RHS.x + 1;
    newVector.y = RHS.y + 1;
    newVector.z = RHS.z + 1;
    return newVector;
}

//Vector operator - (const Vector & RHS)
//{
//    Vector NegV;
//    NegV.x = -1 * RHS.x;
//    NegV.y = -1 * RHS.y;
//    NegV.z = -1 * RHS.z;
//    return NegV;
//}

