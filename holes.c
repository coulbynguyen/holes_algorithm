#include <stdio.h>
int get_num(long a) {
 int total = 0;
 while((a / 10)>0){
 	if(a%10 == 0){
  	total += 1;
  }
  else if(a%10 == 6){
  	total += 1;
  }
  else if(a%10 == 8){
  	total += 2;
  }
  else if(a%10 == 9){
  	total +=1;
  }
  a = a/10;
 }
 	if(a%10 == 0){
  	total += 1;
  }
  else if(a%10 == 6){
  	total += 1;
  }
  else if(a%10 == 8){
  	total += 2;
  }
  else if(a%10 == 9){
  	total +=1;
  }


 return total;
}
int main(){
  long s;
  int numholes;
  printf("Enter a number to count the holes\n");
  scanf("%d", &s);
  numholes = get_num(s);
  printf("number of holes in that integer is: %d\n", numholes);
  return 0;
}
