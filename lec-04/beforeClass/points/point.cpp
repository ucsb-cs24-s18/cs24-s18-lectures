// FILE: point.cpp
// CLASS IMPLEMENTED: point (See point.h for documentation.)

#include "point.h"

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
