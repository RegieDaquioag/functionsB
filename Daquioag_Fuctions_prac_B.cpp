// Name: Regie Daquioag
// Date: October 13, 2015
// Project: Functions Practice B

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

double feetToInches(double val); //1A
void  feetToInches(double val, double& inches); //1B
double computeRectangle(double valA, double valB); //2A
void computerArea (double valA, double valB, double& valC); //2B
void computerArea (double valA, double valB, double& valArea, double& valPerimeter); //3A
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF); //4A
void calcAreaPerimeter(double radius, double& area, double& perimeter); //5A
double calcArea(double length, double width); //6A

const double EPS = .001;


int main()
{
    //--------------------1A-----------------------
    assert(feetToInches(5) == 60);
    assert(feetToInches(6) == 72);
    assert(feetToInches(7) == 84);
    
    //--------------------1B-----------------------
    double inches;
    feetToInches(5, inches);
    assert(fabs(inches -60) < EPS);
    
    feetToInches(6, inches);
    assert(fabs(inches -72) < EPS);
    
    feetToInches(7, inches);
    assert(fabs(inches -84) < EPS);
    
    //--------------------2A-----------------------
    assert(computeRectangle(2,3)== 6);
    assert(computeRectangle(3,4)== 12);
    assert(computeRectangle(4,5)== 20);
    
    //--------------------2B-----------------------
    double valC;
     computerArea(2, 3, valC);
     assert(fabs(valC - 6) < EPS);
        
     computerArea(3, 4, valC);
     assert(fabs(valC - 12) < EPS);
     
     computerArea(4, 5, valC);
     assert(fabs(valC - 20) < EPS);
     
     //--------------------3A-----------------------  
     double valArea, valPerimeter;
     computerArea(2, 3, valArea, valPerimeter);
     assert(fabs(valArea - 6) < EPS);
     assert(fabs(valPerimeter - 10) < EPS);
     
     computerArea(3, 4,valArea, valPerimeter);
     assert(fabs(valArea - 12) < EPS);
     assert(fabs(valPerimeter - 14) < EPS);
     
     computerArea(4, 5,valArea, valPerimeter);
     assert(fabs(valArea - 20) < EPS);
     assert(fabs(valPerimeter - 18) < EPS);
     
     //--------------------4A-----------------------   
     double valE, valF;
     stats(1, 2, 3, 4, valE, valF);
     assert(fabs(valE - 2.5) < EPS);
     assert(fabs(valF - 10) < EPS);
     
     stats(5, 6, 7, 8, valE, valF);
     assert(fabs(valE - 6.5) < EPS);
     assert(fabs(valF - 26) < EPS);
     
     stats(9, 10, 11, 12, valE, valF);
     assert(fabs(valE - 10.5) < EPS);
     assert(fabs(valF - 42) < EPS);
     
     //--------------------5A-----------------------     
     double area, perimeter;
     calcAreaPerimeter(5, area, perimeter);
     assert(fabs(area - 78.5397) < EPS);
     assert(fabs(perimeter - 31.4159) <EPS);
     
     calcAreaPerimeter(10, area, perimeter);
     assert(fabs(area - 314.159) < EPS);
     assert(fabs(perimeter - 62.8318) < EPS);
      
     calcAreaPerimeter(15, area, perimeter);
     assert(fabs(area - 706.858) < EPS);
     assert(fabs(perimeter - 94.2477) < EPS);
     
     
     //--------------------6A-----------------------
     assert(calcArea(6, 7) == 42);
     assert(calcArea(8, 9) == 72);
     assert(calcArea(149, 98) == 14602);
     
    return 0;
}



//1A
double feetToInches(double val)
{
    double inches = (val * 12);
    return inches;
}

//1B
void  feetToInches(double val, double& inches)
{   
    inches = (val * 12);
    return;
}

//2A
double computeRectangle(double valA, double valB)
{
    double area = (valA * valB);
    return area;
}

//2B
void computerArea(double valA, double valB, double& valC)
{
    valC = (valA * valB);
    return;
}

//3A
void computerArea (double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = (valA * valB);
    
    valPerimeter = ((valA + valA)+(valB + valB));
    return;  
}

//4A
void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = ((valA + valB + valC + valD) / 4);
    
    valF = (valA + valB + valC + valD);
    return;
}

//5A
void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    const double PI = 3.14159;
    
    area = (PI * (radius * radius));
    
    perimeter = (2 * PI * radius);
    return;
}

//6A
double calcArea(double length, double width)
{
    double area = (length * width);
    return area;    
}
