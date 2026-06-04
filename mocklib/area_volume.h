#include <iostream>
#include <cassert>
#include "horizontal_geodetic.h"
#include "Map_Globe.h"
#include "gpx.h"

using namespace std;

/*
Class to read GPX (xml) files and extract
horizontal point data
*/

class Area
{
    public:
        Area(char *filename)
        {
            // call gpx.get_info(filename);
            // int area = ...;
            // int perim = ...;
            // horizontal* array = ...;
        }

        void *add_horiz_point(horizontal k){
            // add a point to the current area calculation, i.e., redefine
            // update area, perim
            // return some error code on failure
        }

        int get_perim(){
            // return the perimiter in km of the area bounded by the horizontal points
            // calls Map.get_distance, in example use this to outline a "path"
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

        void write(char *filename){
            // write info in array to filename
            // call gpx.write_to_file
            // return error msg else
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
            // call gpx.get_info(filename)
            // int volume = ...;
            // int perim = ...;
            // int area = ...;
        }
        
        void *add_geodetic_point(geodetic k){
            // add a point to the current area calculation, i.e., redefine perim
            // update area, perim, volume
            // return some error code on failure
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

        void write(char *filename){
            // write info in array to filename
            // call gpx.write_to_file
            // return error msg else
        }

    private:
        // no private methods
};