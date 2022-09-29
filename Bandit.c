#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int a,b,c,x;
x=5000;
srand(time(NULL)); 
printf("One-armed bandit\n");
printf("Start\n");
while (1) {
int arr[3];
int i,s;
//arr[0]=6; arr[1]=6; arr[2]=6;
for (i=0; i<3; i++){
arr[i] = rand() % 8;
printf("%d   ",arr[i]);}
if (arr[0]==5 && arr[1]!=5) s=51; 
else if (arr[0]==arr[1] && arr[2]!=5 && arr[0]==5  ) s=57;
else if (arr[0]==7 && arr[1]!=7 ) s=71; 
else if (arr[0]==arr[1] && arr[2]!=7 && arr[0]==7 ) s=57;
else if (arr[0]==arr[1] && arr[1]==arr[2] ) s=arr[0]; 
else s=8;
switch (s){
case 0: x=x+100; printf("Score : %d\n",x);break;
case 1: x=x+100; printf("Score : %d\n",x);break;
case 2: x=x+100; printf("Score : %d\n",x);break;
case 3: x=x+100; printf("Score : %d\n",x);break;
case 4: x=x+100; printf("Score : %d\n",x);break;
case 51: x=x+100; printf("Score : %d\n",x);break;
case 5: x=x+300; printf("Score : %d\n",x);break;
case 57: x=x+200; printf("Score : %d\n",x);break;
case 6: x=x-100; printf("Score : %d\n",x); break;
case 71: x=x+100; printf("Score : %d\n",x);break;
case 7:  printf("YOU WIN\n"); return 0;
case 8:x=x-50; printf("Score : %d\n",x); break;}
if (x<=0) {printf("YOU LOSE\n"); return 0;}}
return 0;}
