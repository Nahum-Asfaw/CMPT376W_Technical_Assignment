#include <iostream>
#include <cassert>
#include "horizontal_geodetic.h"

using namespace std;

/*
Class to manage horiziontal point information
for individual points not creating an area
*/

class Map
{
    public:
        Map() // empty constructor
        {
            // just does methods, doesn't hold any values, no return value
        }
    
        int get_distance(horizontal k1, horizontal k2){
            // returns distance in km calculation between two horizontal points, 
            // return some error code on failure
        }

        float get_long_difference(horizontal k1, horizontal k2){
            // get difference in longitude between k1, k2
            // some error on failure
        }

        float get_lad_difference(horizontal k1, horizontal k2){
            //same deal
        }
        
        char *get_closest_ocean(horizontal k){
            // returns name of closest ocean to given point, for a reference at the center of each ocean
            // can return: "Pacific", "Atlantic", "Indian", "Antartic", "Artic"
            // return "error: error msg" on failure
        }

        char *get_ocean_continent(horizontal k){
            // returns either ocean or continent the given point is on
            // can return: "Pacific", "Atlantic", "Indian", "Antartic", "Artic"
            // can return: "North America", "South America", "Asia", "Europe", "Africa", "Oceania", "Antartic"
            // else returns "error: error msg" on failure
        }

        float dist_to_null_island(horizontal k){
            // return distance to null island, where laditude and longitude are both zero.
            // not a real island island, return some error code on failure
        }

    private:
        // no private methods
        
};

/*
Class to manage geodetic point information
for individual points not creating an area
*/

class Globe
{
    public:
        Globe() // empty constructor
        {
        }
        
        int get_pythag_distance(geodetic k1, geodetic k2){
            // returns pythagorean distance, needed to deal with height
            // else returns error code on failure
        }

        float get_long_difference(geodetic k1, geodetic k2){
            // some error on failure
        }

        float get_lad_difference(geodetic k1, geodetic k2){
            //same deal
        }
        
        int get_elevation_difference(geodetic k1, geodetic k2){
            // all return error code on failure
        }

        char *get_ocean_continent(horizontal k){
            // returns either ocean or continent the given point is on
            // can return: "Pacific", "Atlantic", "Indian", "Antartic", "Artic"
            // can return: "North America", "South America", "Asia", "Europe", "Africa", "Oceania", "Antartic"
            // else returns "error: error msg" on failure
        }

        int dist_to_mariana_trench(horizontal k){
            // return distance to mariana trench, lowest point on earth
            // not a real island island, return some error code on failure
        }

    private:
        // no private methods

};