// FILE: point.cpp
// CLASS IMPLEMENTED: point (See point.h for documentation.)

#include "point.h"

void operator<<(ostream& out, point p){
    
    out<<"("<<p.get_x()<<", "<<p.get_y()<<")"<<endl;
    
}

void operator>>(istream& ins, point&.  p){
    cout<<"Enter (x, y)"<<endl;

    cin>>p.x>>p.y;

}

bool operator==(const point p1, const point p2){
    return (p1.get_x()== p2.get_x()) && (p1.get_y()== p2.get_y());
}

point operator+(point p1, point p2){

    return point(p1.get_x()+ p2.get_x(),p1.get_y()+ p2.get_y() );

;
}
/*bool point::operator==(const point p) const{
    return (x== p.x) && (y== p.y);

}*/

point::point(double initial_x, double initial_y)
{
    x = initial_x;   // Constructor sets the point to a given position.
    y = initial_y;
}


void point::shift(double x_amount, double y_amount)
{
    x += x_amount;
    y += y_amount;   
}


void point::rotate90( )
{
    double new_x;
    double new_y;

    new_x = y;  // For a 90 degree clockwise rotation, the new x is the original y,
    new_y = -x; // and the new y is -1 times the original x.
    x = new_x;
    y = new_y; 
}
