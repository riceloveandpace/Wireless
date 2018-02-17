#include<stdio.h>

char updateBufferIdx(char size, char head);
char getNegOffsetIndex(char size, char head, char offset);


char updateBufferIdx(char size, char head) {
   // manipulates buffer by updating head value
   // then adding in new value for buffer head
   printf("updateBufferIdx ~~~~~~~~~~~~  \n");
   printf("HEAD: %d, ", head);
   head++;
   printf("HEAD: %d \n", head);
   if (head >= size) {
      // wrap the head pointer around array
      head = head - size;
   }
   return head;
}

char getNegOffsetIndex(char size, char head, char offset) {
   char temphead;
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

char newbuf[10] = {0};

void main() {
   char headidx = 0;
   char bsize = 10;
   char i;
   char offset;
   for (i=0; i<15;i++) {
      headidx = updateBufferIdx(bsize, headidx);
      newbuf[headidx] = i+1;
        printf("BUFFER[%d]=%d \n", headidx, newbuf[headidx]);
      printf("Data: %d\n", i+1);
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


