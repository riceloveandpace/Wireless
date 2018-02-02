#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
// #include "circular_linked_list.h"


struct node {
   int data;
	
   struct node *next;
   struct node *prev;
};


bool isEmpty(struct node *last) {
   return last == NULL;
}

int length(struct node *last) {
   int length = 0;
   struct node *current;

   //if list is empty
   if(last == NULL) {
      return 0;
   }

   current = last->next;

   printf("LAST: %p \n", last);
   length++; // 
   while(current != last) {
      printf("(%p,%p) \n",current,current->next);
      length++;
      current = current->next;   
   }
	
   return length;
}

//insert link at the first location
struct node * insertFirst(struct node *last, int data) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->data = data;
	
   if (last == NULL) {
      // isEmpty
      last = link;
      last->next = last;
      last->prev = last;
   } else {
      // point link to the old first value
      // printf("Old First: %p \n", last->next);
      // printf("Old Last: %p \n", last);
      last->next->prev = link;
      link->next = last->next;
      link->prev = last;
      
      // printf("New First: %p \n", link);
      // printf("New First Next: %p \n", link->next);
      // printf("New First Prev: %p \n", link->prev);
      // point the last value to the link
      last->next = link;
      if (last->prev == last) {
         last->prev = link;
      } 
      
      // printf("Last  Next: %p \n", last->next);
      // printf("Last Prev: %p \n", last->prev);
      // printf("============= \n");
   }

   return last;    
}

struct node * insertLast(struct node *last, int data) {
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->data = data;

   if (last == NULL) {
      last = link;
      last->next = last;
      last->prev = last;
   } else {
      link->next = last->next;
      link->prev = last;
      last->next = link;
      last = link;
   }

   return last;
}

struct node * deleteLast(struct node *last) {
   // printf("Deleting Last... \n");
   struct node * newtail;
   struct node * head;
   struct node * temp;

   if(last->next == last) {
      last = NULL;
      return last;
   }

   newtail = last->prev;
   head = last->next;
   temp = last;
   // printf("Newtail: %p \n", newtail);
   // printf("Head: %p \n", head);
   // printf("Last: %p \n", last);

   newtail->next = head;
   head->prev = newtail;
   last = newtail;
   // printf("Newtail: %p \n", newtail);
   // printf("Head: %p \n", head);
   // printf("Last: %p \n", last);
   free(temp);

   return last;
}

//delete first item
struct node * deleteFirst(struct node *last) {
   struct node * oldhead;
   struct node * newhead;

   if(last->next == last) {
     // only one link in the list  
      last = NULL;
      return last;
   }     

   //mark next to first link as first 
   oldhead = last->next;
   newhead = oldhead->next;
   last->next = newhead;
   newhead->prev = last;
	
   // free first link
   free(oldhead);

   //return the list with the deleted link
   return last;
}

//display the list
void printList(struct node *last) {

   struct node *ptr = last->next;
   printf("\n[ ");
	
   //start from the beginning
   if(last != NULL) {
      int i;
      while (true) {     
         printf("LINK: (%p,%d) | ",ptr,ptr->data);
         printf("PTR: (%p,%p,%p) \n",ptr->prev,ptr, ptr->next);

         ptr = ptr->next;
         // printf("PTR:(%p,%p) ",ptr, ptr->next);
         if (ptr == last->next) {
            break;
         }
      }
   }
	
   printf(" ] \n");
}

struct node * populateListZeros(struct node *last, int size) {
   // create list of zeros of the size specified
   int i;
   for (i=0;i<size;i++) {
      // add links to the list all of value zero
      last = insertFirst(last, 0);
   }
   return last;
}

struct node * updateBuffer(struct node *last, int data) {
   if (last == NULL) {
      return last;
   }

   // delete last and then add first
   last = deleteLast(last);
   last = insertFirst(last, data);
   return last;
}

int * getEnergyMeanLastN(struct node *last, int n) {
   struct node *ptr = last->next; // pointer to head
   int* data = malloc(sizeof(int) * 2);    
   int j;

   if(last != NULL) {
      for (j=0;j<n;j++) {
         data[0] += ptr->data;
         data[1] += (ptr->data > 0) ? ptr->data : -(ptr->data); // absolute value
         ptr = ptr->next;
         if (ptr == last->next) {
            break;
         }
      }
   }

   return data;

}



int main() {
   struct node *last = NULL;
   last = populateListZeros(last, 5);
   // printList(last);

   last = updateBuffer(last, 1);
   // last = deleteLast(last);
   last = updateBuffer(last, 2);
   last = updateBuffer(last, 3);
   last = updateBuffer(last, 4);
   last = updateBuffer(last, 5);
   // printf("%d",length(last));
   // printList(last);
   int *b;
   b = getEnergyMeanLastN(last,5);
   int i;
   for(i=0;i<2;i++) {
      printf("BAR[%d]: %d \n", i, *(b+i));
   }
}