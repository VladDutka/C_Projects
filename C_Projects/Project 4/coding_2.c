#include <stdio.h>

// Takes an array and int.
int GoodSubarraySum(int arr[],int n){
    // sets the count to 0
    int count = 0;     
    // a for loop for the sub arrays                         
    for(int i = 0;i < n;i++){
        // if the character is negative skip it
        if(arr[i] < 0 ){
            continue;
        }
        // adds the value to the count
        count += arr[i];
        // a sum arr equal to the arr[i] is made
        int Sum = arr[i];       
        // a loop for the sub arrays from the I index            
        for(int j = i + 1;j < n;j++){
            // if the sum is negative then leave this loop
            if(Sum + arr[j] < 0){
                break;
            }               

            // adds the value at j index 
            Sum += arr[j];      

            // adds the sum to the count
            count += Sum;                      
            
        }
    }
    // returns the count
    return count;                                 
}
int main(){
    int n; 
    // asks for the user input 
    scanf("%d",&n);
    // goes through the number of cases
    for(int i = 1; i <= n; i++){
        int x;
        // Asks for size of array
        scanf("%d",&x);        
        int arr[x];
        // asks for the values of the array
        for(int i=0;i<x;i++){
            scanf("%d",&arr[i]);
            
        }
        // prints the goodsubarraysum
        printf("Case #%d: %d\n", i, GoodSubarraySum(arr,x));
       
        
    }

    return 0;
}