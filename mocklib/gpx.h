#include <iostream>
#include <cassert>
#include "horizontal_geodetic.h"
// #include "../gpx/some_file.h"

using namespace std;

/*
Class to manage input output operations with
GPX (xml) files
*/

class gpx
{
    public:
        gpx(){
            // no constructor
        }

        void* get_info(char *filename){
            // return coord info from gpx file
            // if no elevation return as horizontal
            // return "error: error msg" on failure
        }

        void *write_to_xml(char *filename, horizontal *array){
           // create an xml file, writting the current date, point info
           // return "error: error msg" on failure
        }

        void *write_geodetic_to_xml(char *filename, geodetic *array){
           // return "error: error msg" on failure
        }

    private:
        // no private methods
};