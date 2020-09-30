#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int n,guess,numguess=1;
srand(time(0));
n=rand()%100+1;
printf("the nnum is %d\n",n);

do{
    printf("enter number between 1 to 100\n");
    scanf("%d",&guess);
    if(guess>n){
        printf("Lower number plz \n");
    }
    else if(guess<n){
        printf("Higher number plz\n");
    }
    else{
        printf("u guessed it right in %d attempts\n",numguess)
    }
    numguess++;
    }
while(guess!=n);
    
    
    return 0;
} 