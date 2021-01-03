#include<stdlib.h>
#include<assert.h>
#include "slist.h"

slist slist_new(){
slist s1 = {null, null, 0};
return s1;
}

uint32_t slist_length(const slist *list){
assert(list!=null);
return list->length;

slist* slist_addnode_head(slist *list, int32_t val){
assert(list!=null);
node *new_node=get_new_node(val);
newnode->next=lis->head;
list->head=new_node;
}
++list->length;

assert((list->length==1 && list->head==list->tail))||(list->length>1 && list->head!=list->tail)
};
return list;

slist* slist_add_node_tail(slist *list, int32_t val){
assert(list!=null);
node *new_node=(node)*malloc(sizeof(node));
if(list->tail!=null){
list->tail->next=new_node;
list->tail=new_node;
}
else{
list->head=list->tail=new_node;
}
++list->length;
assert((list->length==1 && list->head==list->tail)|| (list->length>1 && list->head!=list->tail));
return list;

slist* slist_delnode_head(slist *list){
assert(list!=null);
node *temp;
if(list->head!=null){
temp=list->head;
list->head=list->head->next;
if(list->head==null){
list->tail=null;
}
--list->length;
free(temp);
}
return list;
}

slist* slist_delnode_tail(slist *list){
assert(list!=null);
node *last, *cur;
if(list->tail!=null){
last=list->tail;
if(list->head==list->tail){
list->head=list->tail=null;
}
else{
for(cur=list->head;cur->next!=last;cur=cur->next);
list->tail=cur;
cur->next=null;
}
--list->length;
free(last);
}
return list;
}

slist* slist_max_element(slist *list){
using namespace std;
struct node{
int data;
struct node* next;
};

int largestElement(struct node* head)
{
int max = INT_MIN;
while (head!=null){
if(max<head->data)
max = head->data;
head=head->next;
}
return max;
}
slist* slist_min_element(slist *list);
int smallestElement(struct node* head)
{
int min = INT_MAX;
while (head!=null){
if(min<head->data)
min = head->data;
head=head->next;
}
return min;
}

slist* slist_rev_element(slist *list);
{
using namespace std;
struct node{
int data;
struct node* next;
node(int data)
{
this->data=data;
node(int data)
}
};
struct LinkedList{
node* head;
LinkedList(){head=null);}
reverse()
node* current = head;
node *prev=NULL; *next=NULL;
while(current!=NULL){
next=current->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;
}



