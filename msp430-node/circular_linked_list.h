/*
 * circular_linked_list.h
 *
 *  Created on: Jan 26, 2018
 *      Author: Yoseph
 */

 #ifndef CIRCULAR_LINKED_LIST_H_
 #define CIRCULAR_LINKED_LIST_H_
 
bool isEmpty(struct node *);
int length(struct node *);
struct node * insertFirst(struct node *, int);
struct node * insertLast(struct node *, int);
struct node * deleteFirst(struct node *);
struct node * deleteLast(struct node *);
struct node * updateBuffer(struct node *, int);
void printList(struct node *);

 
 #endif /* CIRCULAR_LINKED_LIST_H_ */
 