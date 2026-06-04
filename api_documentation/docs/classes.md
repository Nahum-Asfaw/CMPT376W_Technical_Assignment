# Classes

List of all classes and methods in **mocklib**.

## Map

Class to manage horiziontal point information
for individual points, not creating an area or perimiter.

### Public Methods
    Map()

Empty constructor, has no return value.

    Map.get_distance(horizontal k1, horizontal k2)
    
Returns `int` of geographical distance in kilometers between `k1` and `k2`, approximating arc distance using tunnel distance.  
Returns `-1` on failure.

    Map.get_long_difference(horizontal k1, horizontal k2)

Returns `float` of comparison `|k1 - k2|` of longitude values for `k1`, `k2`.  
Returns `-1` on failure.

    Map.get_lad_difference(horizontal k1, horizontal k2)

Returns `float` of comparison `|k1 - k2|` of laditude values for `k1`, `k2`.  
Returns `-1` on failure.

    Map.get_closest_ocean(horizontal k)

Returns `char` string sating closest ocean given a reference point `k`. Ocean points are saved  
as the center of each ocean.  
Returns one of `Pacific`, `Atlantic`, `Indian`, `Artic`, `Antartic` on success.  
Returns `Error: example error msg` on failure.

    Map.get_ocean_continent(horizontal k)

Returns `char` string of Ocean or Continent a reference point `k` is on.  
Returns one of `Pacific`, `Atlantic`, `Indian`, `Artic`, `Antartic`,  
`Africa`, `Asia`, `Europe`, `North America`, `Oceania`, `South America`, `Antartica` on success.
Returns `Error: example error msg` on failure.

    Map.dist_to_null_island(horizontal k)

Returns `int` of geographical distance in km to "Null Island", the point where `longitude = 0` and  
`laditude = 0`. Off the coast of Ghana, "Null Island" is an in-joke in GIS, it's not an actuall island.  
Returns `-1` on failure.

### Private Methods
There are no private methods for `Map`.

## Globe
Class to manage geodetic point information
for individual points not creating a volume.

### Public Methods
    Globe()

Empty constructor, no return value.

    Globe.get_pythag_distance(geodetic k1, geodetic k2)

Returns `int` of pythagorean distance in kilometers between two geodetic points `k1`, `k2`.  
Returns `-1` on failure.

    Globe.get_long_difference(geodetic k1, geodetic k2)

Returns `float` of comparison `|k1 - k2|` of longitude values for `k1`, `k2`.  
Returns `-1` on failure.

    Globe.get_lad_difference(geodetic k1, geodetic k2)

Returns `float` of comparison `|k1 - k2|` of laditude values for `k1`, `k2`.  
Returns `-1` on failure.

    Globe.get_elevation_difference(geodetic k1, geodetic k2)

Returns `int` of comparison `|k1 - k2|` of elevation values for `k1`, `k2`.  
Returns `-1` on failure.

    Globe.get_ocean_continent(geodetic k)

Returns `char` string of Ocean or Continent a reference point `k` is on.  
Returns one of `Pacific`, `Atlantic`, `Indian`, `Artic`, `Antartic`,  
`Africa`, `Asia`, `Europe`, `North America`, `Oceania`, `South America`, `Antartica` on success.
Returns `Error: example error msg` on failure.

    Globe.dist_to_mariana_trench(geodetic k)

Returns `int` of distance in kilometers from geodetic point `k` to the bottom of the Mariana Trench.

### Private Methods
There are no private methods for `Globe`.

## GPX
Class to manage input output operations with GPX (xml) files.

### Public Methods

    gpx()

Empty construcor, no return value.

    gpx.get_info(char *filename)

Read from a GPX (`xml`) file, return point info as either `horizontal` or `geodetic`.  
Returns `Error: example error msg` on failure.

    gpx.write_horiz_to_xml(char *filename, horizontal *array)

Appends to an `xml` file (or creates one with the given filename if one doesn't exist)  
the horizontal point information `array` and time of day.
Returns `Error: example error msg` on failure.

    gpx.write_geodetic_to_xml(char *filename, horizontal *array)

Appends to an `xml` file (or creates one with the given filename if one doesn't exist)  
the geodetic point information `array` and time of day.
Returns `Error: example error msg` on failure.

### Private Methods
There are no private methods for `GPX`.

## Area
Class to manage array of horizontal point values that create an area.

### Public Methods

    Area(char *filename)

Constructor. Reads from `xml` file of `filename` and sets `horizontal *array`, `int area`, `int perim`.

    Area.add_horiz_point(horizontal k)

Appends horizontal point `k` to the `array`. Updates `area` and `perim`, and returns `Error: example error msg` on failure.

    Area.return_perim()

Returns `int` value `perim` representing the perimiter (path) in kilometers bounded by the points in `array`.  
Returns `-1` on failure.

    Area.return_area()

Returns `int` value `area` representing the area in km^2 bounded by the points in `array`.  
Returns `-1` on failure.

    Area.is_point_inside(horizontal k)

Returns `bool`, checks whether a given `horizontal` point `k` is bounded within the points  
in `array`. Returns `true` if `k` is inside the area, `false` if not.
Returns `false` on failure.

    Area.write(char *filename)

Appends array (list) of horizontal point information to `xml` file of a given `filename`. Will create an `xml` file of `filename` if that file is not found.
Returns `Error: example error msg` on failure.

### Private Methods
    horizontal *array;
    int area;
    int perim;

## Volume

Class to manage array of geodetic point values that create a volume.

### Public Methods
    Volume(char *filename)

Constructor. Reads from `xml` file of `filename` and sets `geodetic *array`, `int area`, `int perim`.

    Volume.add_geodetic_point(geodetic k)

Appends a geodetic point `k` to `array`.
Returns `Error: example error msg` on failure.

    Volume.return_perim()

Returns `int` value `perim` representing the perimiter (path) in kilometers bounded by the points.  
Returns `-1` on failure.

    Volume.return_area()

Returns `int` value `area` representing the area in km^2 bounded by the points in `geodetic *` array, ignoring elevation values.  
Returns `-1` on failure.

    Volume.return_volume()

Returns `int` value representing in km^3 the volume bounded by the points in `geodetic *` array.  
Returns `-1` on failure.

    Volume.is_point_inside(geodetic k)

Returns `bool`, checks if geodetic point `k` is inside the volume bounded by the points in `array`. Returns `true` if `k` is inside the volume, `false` if not.  
Returns `false` on failure.

    Volume.return_avg_elevation()

Returns `int` representing in kilometers the average elevation of the volume bounded in the `geodetic *` array.  
Returns `-1` on failure.

    Volume.write(char *filename)

Appends array (list) of geodetic point information to `xml` file of a given `filename`. Will create an `xml` file of `filename` if that file is not found.
Returns `Error: example error msg` on failure.

### Private Methods
    geodetic *array;
    int area;
    int perim;
    int volume;
