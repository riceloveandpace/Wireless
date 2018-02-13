#include<stdio.h>

int updateBuffer(int buffer[], int size, int head, int data);
int getNegOffsetIndex(int size, int head, int offset);

int updateBuffer(int buffer[], int size, int head, int data) {
   // manipulates buffer by updating head value
   // then adding in new value for buffer head 
   head++;
   if (head >= size) {
      // wrap the head pointer around array
      head = head - size;
   }
   buffer[head] = data;
   return head;
}

int getNegOffsetIndex(int size, int head, int offset) {
   int i;
   int temphead;
   // listlen = 2;
   // current head = 1;
   // n = 2;
   // head - n = 3; 
   // realindex = 3;
   if (offset > head) {
      temphead = size + head - offset;
   } else {
      temphead = head - offset;
   }

   return temphead;
}

int newbuf[10] = {0};

void main() {
   int headidx = 0;
   int bsize = 10;
   int i;
   int offset;
   for (i=0; i<15;i++) {
      headidx = updateBuffer(newbuf, bsize, headidx,i+1);
   }
   for (i=0; i< 10; i++) {
      printf("BUFFER[%d]=%d \n", i, newbuf[i]);
      }
    printf("~~~~~~~~~~\n");
   for (i=0;i<4;i++) {
       offset = getNegOffsetIndex(bsize, headidx, i);
      printf("BUFFER[%d]=%d \n", offset, newbuf[offset]);
   }
   return;
}