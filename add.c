#include<stdio.h>
extern int add(int a,int b);
int main(){
  int n1=10,n2=20;
  printf("Sum = %d",add(n1,n2));
  return 0;
}
