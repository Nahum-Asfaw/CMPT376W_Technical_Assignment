#include <iostream>
#include <cassert>

using namespace std;

/* Will work using WGS 84 standard, shouldn't matter much
Assignment suggests:
- Compare distance, eg., 'int Map.get_distance(horizontal k1, horizontal k2)', and 
'Globe.get_distance(geodetic k1, geodetic k2)', to also return differences in elevation
'Globe.get_elevation(geodetic k1, geodetic k2)'
- For comparing points (wikipedia vs points inside canada),  
example 'int Map.value_compare(horizontal k1, horizontal k2)',
& 'int Globe.value_compare(geodetic k1, geodetic k2)'.
- Read a GPX (xml) file, get longitude and laditude values from it, return/add 2D class
for processing, 'horizontal Map.get_coords(char *filename)'.

Include functionality for:
- Geographic points (2D and 3D)
- A collection of points that specifies a polygon (defining a region)
- A collection of points that specifies a "track" (i.e., a journey taken by someone)
- Constructing a data structure from a GPX file

What else should I have?
- Return what continent, ocean a point lies on,
- Get/ return area of a collection of 2D points, being an array
- test if a reference point is within an area
- write + return a GPX file given coords (needs to get current time) of a given filename
 

REFERENCES/AKNOWLEDGEMENTS: 
- https://stackoverflow.com/questions/21015039/how-to-read-gpx-file-xml-format-in-qt
- https://github.com/irdvo/gpxlib -> This is an imaginary dependency
FAVICON:
- https://commons.wikimedia.org/wiki/File:Globe_rotating.gif 
- Attribution: kkck, Public domain, via Wikimedia Commons
- https://www.mkdocs.org/:
THEME
- https://sourcefoundry.org/cinder/

*/
