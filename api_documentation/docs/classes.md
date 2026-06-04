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
Returns on of `Pacific`, `Atlantic`, `Indian`, `Artic`, `Antartic`,  
`Africa`, `Asia`, `Europe`, `North America`, `Oceania`, `South America`, `Antartica` on success.
Returns `Error: example error msg` on failure.

    Map.dist_to_null_island(horizontal k)

Returns `int` of geographical distance in km to "Null Island", the point where `longitude = 0` and  
`laditude = 0`. Off the coast of Ghana, "Null Island" is an in-joke in GIS, it's not an actuall island.  
Returns `-1` on failure.

### Private Methods
There are no private methods for `Map` or any classes in **mocklib**.

## Globe
Class to manage geodetic point information
for individual points not creating a volume.

### Public Methods
    Globe()

Empty constructor, no return value.

    Globe.get_pythag_distance(geodetic k1, geodetic k2)

Returns `int` of pythagorean distance in kilometers between two geodetic points `k1`, `k2`.  
Returns `-1` on failure.

    Map.get_long_difference(geodetic k1, geodetic k2)

Returns `float` of comparison `|k1 - k2|` of longitude values for `k1`, `k2`.  
Returns `-1` on failure.

    Map.get_lad_difference(geodetic k1, geodetic k2)

Returns `float` of comparison `|k1 - k2|` of laditude values for `k1`, `k2`.  
Returns `-1` on failure.

    Map.get_elevation_difference(geodetic k1, geodetic k2)

Returns `int` of comparison `|k1 - k2|` of elevation values for `k1`, `k2`.  
Returns `-1` on failure.


## Area

## Volume

## GPX