#include<studio.h>
#ifndef SLIST_H_INCLUDED
#define SLIST_H_INCLUDED

typedef struct_node_ode;
struct_node_{
int32_t data;
node *next;
};

typedef struct_slist_slist;
struct_slist_{
node *head;
node *tail;
uint32_t length;
};

slist slist_new();
uint8_t slist_lookup(const slist *list, int32_t key);
uint32_t slist_length(const slist *list);
slist* slist_addnode_head(slist *list, int32_t val);
slist* slist_addnode_tail(slist *list, int32_t val);
slist* slist_delnode_head(slist *list);
slist* slist_delnode_tail(slist *list);
slist* slist_max_element(slist *list);
slist* slist_min_element(slist *list);
slist* slist_rev_element(slist *list);


