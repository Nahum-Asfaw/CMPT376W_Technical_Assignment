#include <iostream>
#include <cassert>
#include "horizontal_geodetic.h"
#include "Map_Globe.h"

using namespace std;

/*
Class to manage array of horizontal point values
that create an area
*/

class Area
{
    public:
        Area(horizontal *array)
        {
            // int area = ...;
            // int perim = ...;
        }

        void *add_horiz_point(horizontal k){
            // add a point to the current area calculation, i.e., redefine
            // update area, perim
            // return some error code on failure
        }

        int get_perim(){
            // return the perimiter in km of the area bounded by the horizontal points
            // calls Map.get_distance
            // return some error code on failure
        }

        int get_area(){
            // return in km^2 the area bounded by the horizontal points
            // return error code on failure
        }

        bool is_point_inside(horizontal k){
            // check wether a given point is inside the area bounded by array
            // return true if true, false if not, false on error
        }
 
    private:
        // no private methods
};

/*
Class to manage array of geodetic point values
that create a volume
*/

class Volume
{
    public:
        Volume(geodetic *array){
            // int volume = ...;
            // int perim = ...;
            // int area = ...;
        }
        
        void *add_geodetic_point(geodetic k){
            // add a point to the current area calculation, i.e., redefine perim
            // update area, perim, volume
            // return some error code on failure
        }
    
        int get_perim(){
            // return some error code on failure
            // calls Globe.get_pythag_distance
        }

        int get_area(){
            // return error code on failure
        }

        int get_volume(){
            // return volume in km^3 of the bounded volume
        }

        bool is_point_inside(geodetic k){
            // return true if true, false if not, false on error
        }

        int get_avg_elevation(){
            // return in km^3 the average elevation of the bounded area
            // false on error
        }

    private:
        // no private methods
};