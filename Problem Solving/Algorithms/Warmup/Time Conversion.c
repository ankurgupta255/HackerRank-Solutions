#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int n1=0;
  int n2=0;
  int n3=0;
  char a[2];
  int i=0;
  scanf("%d:%d:%d%s",&n1,&n2,&n3,&a);
  if((strcmp(a,"AM")==0)&&(n1!=12)){   
    printf("%02d:%02d:%02d",n1,n2,n3);
  }
  else if((strcmp(a,"PM")==0)&&(n1!=12)){
    n1+=12;
    printf("%02d:%02d:%02d",n1,n2,n3);
  }
  else if((strcmp(a,"PM")==0)&&(n1==12)){
    printf("12:%02d:%02d",n2,n3);
  }
  else if((strcmp(a,"AM")==0)&&(n1==12)){
    printf("00:%02d:%02d",n2,n3);
  }
}


