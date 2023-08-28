//c program to find the smallest number which greater than a given number and has same set of digits as given number
#include<stdio.h>
#include<string.h>
int main(){
    
    char a[50];
    scanf("%s",a);
    int n=strlen(a);
    int i=0;
    
    //find the lesser data form n
    for(i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
            break;
        }
    }
    
    //if i reaches 0 then no answer is possible
    if(i==0){
        printf("There's no next greater data");
    }
    
    //store the lesser  data as "t" and copt the index
    int t=a[i-1];
    int index=i;
    
    //code to find the next greater data than "t" value
    for(int j=i+1;j<n;j++){        
        if(a[j]>t && a[j]<a[index]){  //find the minimum data which is greater than "t" value
            index=j;
        }
    }
    
    //swap "t" value with the next greater data
    int t1=a[i-1];
    a[i-1]=a[index];
    a[index]=t1;
    
    //sort all the data after "i" in ascending order
    for(int k=i;k<n;k++){
        for(int l=i;l<n;l++){
            if(a[k]<a[l]){
                int t2=a[k];
                a[k]=a[l];
                a[l]=t2;
            }
        }
    }
    
    //print your altered array
    printf("%s",a);
    return 0;
}
