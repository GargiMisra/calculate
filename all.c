#include<stdio.h>
extern int add(int a,int b);
extern int sub(int a,int b);
extern int mul(int a,int b);
extern int div(int a,int b);
extern int rem(int a,int b);

int main(){
  int n1=10,n2=20;
  printf("Sum = %d\n",add(n1,n2));
  printf("Diff = %d\n",sub(n1,n2));
  printf("Prod = %d\n",mul(n1,n2));
  printf("Quo = %d\n",div(n1,n2));
  printf("Rem = %d",rem(n1,n2));
  return 0;
}
