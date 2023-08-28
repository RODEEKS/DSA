 #include<stdio.h>
int main(){
    int n;
    printf("enter the array size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("NGE for every array elements is:-\n");
    for(int i=0;i<n-1;i++){
        int min=-1;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                min=a[j];
                break;
            }
        }
        if(min!=-1)
                printf("%d -> %d\n",a[i],min);
        else
            printf("No NGE for %d\n",a[i]);
        }
    }
