#include <iostream>
#include <cassert>
#include "horizontal_geodetic.h"
// #include "../gpx/some_file.h"

using namespace std;

/*
Class to manage array of horizontal point values
that create an area
*/

class GPX
{
    public:
        GPX(){
            // no constructor
        }

        horizontal* get_horiz_info(char* filename){
            // gets horizontal point info from GPX file,
            // returns array in order of coords present in file
            // else, no return value
        }

        void *write_to_xml(char *filename, horizontal *array){
           // create an xml file, writting the current date, horizontal point info
           // return "error: error msg" on failure
        }
    private:
        // no private methods
};