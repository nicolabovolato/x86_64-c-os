#ifndef MEMREGION_H
#define MEMREGION_H

#include <stdint.h>


typedef struct {
    uint8_t* start;
    uint8_t* end;
} mem_region_t;

#endif