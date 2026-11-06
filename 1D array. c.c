//1 D array

#include<stdio.h>

int main(){
    int i;
    //declare& initialize
    int marks[7]={10,20,30,40,50,60,70};
    
    //LOOPS,for loop
    //for(start;stop;step)
    
    for(i=6;i>=0;i--){
        printf("%d\n",marks[i]);
        
    }
    
    return 0;
    
}