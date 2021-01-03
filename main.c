#include<stdio.h>
#include<stdlib.h>
#include "slist.c"

void test_add_at_head(){
slist s1=slist_new();
slist *list=&s1;
assert(slist_length(list)==0);
list=slist_addnode_head(list,10);

void test_delete_at_head(){
slist s1=slist_new();
slist *list=&s1;
assert(slist_length(list)==0);
list=slist_deletenode_head(list,10);


void test_add_at_tail(){
slist s1=slist_new();
slist *list=&s1;
assert(slist_length(list)==0);
list=slist_addnode_tail(list,10);

void test_delete_at_tail(){
slist s1=slist_new();
slist *list=&s1;
assert(slist_length(list)==0);
list=slist_deletenode_tail(list,10);


assert(slist_length(list)==0);
list=slist_max_element(list,10);

assert(slist_length(list)==0);
list=slist_max_element(list,20);

assert(slist_length(list)==0);
list=slist_max_element(list,30);

assert(slist_length(list)==0);
list=slist_minelement(list,10);

assert(slist_length(list)==0);
list=slist_min_element(list,20);

assert(slist_length(list)==0);
list=slist_min_element(list,30);

assert(slist_length(list)==0);
list=slist_rev_element(list, (1,2,3,4,5));

int main(){
test_add_at_head();
test_delete_at_head();
test_add_at_tail();
test_delete_at_tail();
slist_max_element();
slist_min_element();
slist_rev_element();
}

