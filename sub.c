#include<stdio.h>
extern int sub(int a,int b);
int main(){
  int n1=10,n2=20;
  printf("Diff = %d",sub(n1,n2));
  return 0;
}
