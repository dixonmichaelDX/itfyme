#include<stdio.h>
int main(int argc,char *argv[]){
     
    printf(" value is %d,size is %d\n",atoi(argv[1]),sizeof(short));
    printf("value is %hu, size is %d\n",atoi(argv[2]),sizeof(unsigned short));
    printf(" value is %hi,size is %d\n",atoi(argv[3]),sizeof(signed short));
    
    printf("value is %d, size is %d\n",atoi(argv[4]),sizeof(int));
    printf("value is %u, size is %d\n",atoi(argv[5]),sizeof(unsigned int));
    printf(" value is %lu, size is %d\n",atoi(argv[6]),sizeof(signed int));

    
    printf(" value is %ld, size is %d\n",atoi(argv[7]),sizeof(long));
    printf(" value is %li, size is %d\n",atoi(argv[8]),sizeof(signed long));
    printf("value is %lu, size is %d\n",atoi(argv[9]),sizeof(unsigned long));

    
    printf("value is %f, size is %d\n",atof(argv[10]),sizeof(float));  

    
    printf(" value is %lf, size is %d\n",atof(argv[11]),sizeof(double));

}