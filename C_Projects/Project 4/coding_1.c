#include <stdio.h>

int main(){
    // variable T is created
    int T;
    // sets the number of tests to 1
    int test = 1;
    // input of T
    scanf("%d", &T);
    
    // Loops while test is less than 1
    while(test <= 1){
        // Count is set to 0
        int count = 0;
        // sets i to 1
        int i = 1;
        // String limit is set
        char s1[100000], s2[100000];
        // Input of strings 
        scanf("%s", s1);
        scanf("%s", s2);
        // point is set to string 1 and 2 as x and y
        char* x = s1;
        char* y = s2;
        while(*x != '\0' && *y != '\0'){
			// if x and y chacratcers are same
			if(*x == *y){
				// increments x and y by 1
				x++;
				y++;
			}
			else{
				// only increments y by one and adds 1 to count
				y++;
				count++;
			}
		}
		// if x as not at the end of the string
		if(*x != '\0'){
			// sets i to 0
			i = 0;
		}
        // if not 
		else{
			// loops while y is not at the end 
			while(*y != '\0'){
                // increments y and count by 1
				y++;
				count++;
			}
		}
		// prints test number
		printf("Case #%d: ", test);
		// if i is 1
		if(i = 1){
			// number of deletes needed
			printf("%d\n", count);
		}
		// if i is 0 
		else
            // print impossible
			printf("IMPOSSIBLE\n");
        // adds 1 to test
		test++;
        
    }
    return 0;
}