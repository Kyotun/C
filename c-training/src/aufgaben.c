#include <stdio.h>

int main() {
    int a=-10,b=-5,c=-1,min;

    min=c;

    if (a<b){
    	if (a<c){
    		min = a;
    	} else{
    		min = c;
    	}
    } else if(b < c){
    	min = b;
    } else{
    	min = c;
    }
    printf("Minimum:%d\n",min);

    return 0;
}
