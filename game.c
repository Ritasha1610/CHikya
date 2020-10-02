#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int n,guess,nguess=1;
srand(time(0));
n=rand()%100+1;

do{
printf("guess the number between 1 to 100\n");
scanf("%d",&guess);
if(guess>n){
    printf("Lower number please\n");
}
else if(guess<n){
    printf("Higher number please\n");
}
else{
    printf("u guessed it right in %d attempts \n",nguess);
    
}
nguess++;
}
while(guess!=n);

    printf("thank you \n");
    
    return 0;
}
