#include<stdio.h>
int main(){
    int nums[100],target;
    
    printf("Enter the array of number : \n");
    for(int i=0;i<4;i++){
        scanf("%d",&nums[i]);
    }
      
    printf("Set the target : ");
    scanf("%d",&target);

    int sum,sum1,sum2=0;

    for(int i=0;i<target;i++){
        if(nums[i]==target/2 )
        sum1 = nums[i] + nums[i];
        sum = sum1 + sum2;
    }

    printf("the sum of the target is : ");
    for(int i=0;i<target;i++)
        printf("%d",sum);


    
    if(sum!= target){
        printf("The arrays are wrong,try different numbers like 1,2,5,10");
    }
    
    return 0;
}