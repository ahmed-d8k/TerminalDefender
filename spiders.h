#ifndef SPIDERS_H
#define SPIDERS_H


#include "spider.h"

#define MAX_SPIDERS 20

struct Spiders{
    struct Spider *ptr_arr[MAX_SPIDERS];
    int state_arr[MAX_SPIDERS];
    int spider_count;
};

//Creates spiders data structure
struct Spiders create_spiders();

//Adds spider to the list, if full throws error
void add_spider(struct Spiders * spids, int x, int y);

//Adds spider to list with random start position
void add_spider_rand(struct Spiders * spids);

//Moves all spiders
void move_spiders(struct Spiders * spids);

#endif