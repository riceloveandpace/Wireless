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

typedef struct node node;



bool isEmpty(node *last) {
   return last == NULL;
}

int length(node *last) {
   int length = 0;
   node *current;

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


//delete first item
node * deleteFirst(node *last) {
   node * oldhead;
   node * newhead;

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
void printList(node *last) {

   node *ptr = last->next;
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

//insert link at the first location
node * insertFirst(node *last, int data) {

    //create a link
    node *link = (node*) malloc(sizeof(node));
    link->data = data;

    if (last == NULL) {
        // is empty
        last = link;
        last->next = last;
        last->prev = last;
    } else {
        last->next->prev = link;
        link->next = last->next;
        link->prev = last;

        last->next = link;
        if (last->prev == last) {
            last->prev = link;
        }
    }

    return last;
}

node * deleteLast(node *last) {
    node * newtail;
    node * head;
    node * tempnode;

    if(last->next == last) {
        last = NULL;
        return last;
    }

    newtail = last->prev;
    head = last->next;
    tempnode = last;

    newtail->next = head;
    head->prev = newtail;
    last = newtail;
    free(tempnode);

    return last;
}


node * populateListZeros(node *last, int size) {
    // create list of zeros of the size specified
    int i;
    for (i=0;i<size;i++) {
        // add links to the list all of value zero
        last = insertFirst(last, 0);
    }
    return last;
}

node * updateBuffer(node *last, int data) {
    if (last == NULL) {
        return last;
    }

    // delete last and then add first
    last = deleteLast(last);
    last = insertFirst(last, data);
    return last;
}

int * getEnergyMeanLastN(node *last, int n) {
    node *ptr = last->next; // pointer to head
    int* datastore = malloc(sizeof(int) * 2);
    int j;

    if(last != NULL) {
        for (j=0;j<n;j++) {
            datastore[0] += ptr->data;
            datastore[1] += abs(ptr->data); // absolute value
            ptr = ptr->next;
            if (ptr == last->next) {
                break;
            }
        }
    }

    return datastore;
}




int main() {
   node *last = NULL;
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