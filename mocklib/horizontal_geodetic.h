/*
Defines structs for 2D and 3D point structures, using longitude, laditude, and height, 
used by Map.h, Globe.h, area_volume.h, and gpx.h
2D = horizontal, 3D = geodetic
*/

struct horizontal{
    float longitude;
    float laditude;
};

struct geodetic{
    float longitude;
    float laditude;
    int elevation;
};