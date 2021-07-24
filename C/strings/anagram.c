#include <stdio.h>

int isAnagram (char str1[], int len1, char str2[], int len2) {
    simpleSort (str1,len1);
    simpleSort (str2,len2);
    printf("str1=%s\n str2=%s\n",str1, str2);
    int cmp = strcmps (str1,str2,len1);
    return cmp;
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

int strcmps (char str[], char dest[],int size) {
    int cmp = 0;
    int i = 0;
    while(i<size) {  
        if(str[i] != dest[i]){
            cmp = 1;
            break;
        } 
        i++;
    }
    return cmp;   
}


int strlens (char p[]) {
    int len = 0;
    while(p[len] !='\0') {
        len++;
    }
    return len;
}
    
void main() {
    char str1[]="this is india";
    char str2[]="this is indiaaa";
    int len1 = strlens(str1);
    int len2 = strlens(str2);
    if(len1 == len2){
        int a = isAnagram(str1,len1,str2,len1);
        if(a == 0) {
            printf("anagram");
        } else {
            printf("not anagram");

        }
    }
    else {
        printf("not anagram");
    }   
}



   
   
  

