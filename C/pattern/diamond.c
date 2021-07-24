#include <stdio.h>
#include<math.h>
int main()
{
  printf("Enter the row size:");
  int row_size,in,out;
  scanf("%d",&row_size);
  for(out=row_size;out>=-(row_size-1);out--)
    printf("%d\n",out);
        {
            for(in=(row_size-1);in>=abs(out);in--)
            {
                 printf("%d %d\n",in,out);
            }
            printf("\n");
        }
}