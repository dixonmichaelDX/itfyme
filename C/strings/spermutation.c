#include <stdio.h>
#include <string.h>
void swap(char *ch1, char *ch2) {
    char tmp;
    printf("%c %c\n",*ch1,*ch2);
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void perm(char *array, int start, int end) {
   int i;
   //printf("start=%d   end=%d\n",start,end);
   if (start == end)
    printf("%s \n", array);
   else {
       for (i = start; i <= end; i++) {
          swap((array+start), (array+i));
          printf("....start=%d  i= %d\n",start,i);
          perm(array, start+1, end);
          printf("before... 2nd swap  start=%d  i= %d\n",start,i);
          swap((array+start), (array+i)); // swap back 
          printf("after 2nd swap  start=%d  i= %d\n",start,i);
       }
   }
}
int main(int argc, char *argv[]) {
    int n = strlen(argv[1]);
    printf(" The permutations of the string are : \n");
    perm(argv[1], 0, n-1);
    return 0;
}