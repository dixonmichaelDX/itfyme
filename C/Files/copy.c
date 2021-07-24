#include <stdio.h>
int main(){
    char str[128];
    int cnt=0;
    printf("enter the file to read from:\n");
    scanf("%s",str);
    FILE *fp;
    fopen(str,"r");
    if (fp != NULL){
        printf("opened file namesfgsfg %s\n",str);
         while (!feof(fp)) {
            printf("%c",fgetc(fp));
            cnt++;
         }
        printf("looped %d times ",cnt);
        fclose(fp);
    } else {
        printf("unable to open the file %s\n",str);
    }
}
ÿ