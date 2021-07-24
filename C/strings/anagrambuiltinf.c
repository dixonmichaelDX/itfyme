#include <stdio.h>
#include <string.h>

int isAnagram (char str1[],  char str2[]) {
    if(strlen(str1) != strlen(str2)){
        return 0;
    }
    simpleSort (str1, strlen(str1));
    simpleSort (str2, strlen(str2));
    if(strcmp(str1,str2) == 0) {
        return 0;
    }
    return 1;
}

void simpleSort (char a[], int size) {
    for (int i = 0; i<size;i++) {
        int min_idx = i;
        for (int j = i+1; j < size;j++) {
            if (a[j] < a[min_idx])
                min_idx = j;
        }
        char temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
        
    }
}   
void main() {
    char str1[] = "aaaab";
    char str2[] = "babab";
    int a = isAnagram(str1, str2);
    if(a == 0) {
        printf("anagram");
    } else {
        printf("not anagram");
    }      
}



   
   
  

