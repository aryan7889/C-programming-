#include <stdio.h>
int main(){
    int n;
    printf("Enter the Size of an Array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    int postive[n],negative[n];
    int p = 0;
    int q = 0;
    printf("to check wheter the element are posotive or negative.\n");
    for(int i=0;i<n;i++){
        if (arr[i]>0)
        {
            postive[p]=arr[i];
            p++;
        }else{
            negative[q]=arr[i];
            q++;
        }
        int sizeofpos = sizeof(postive)/sizeof(postive[0]);
        int sizeofneg = sizeof(negative)/sizeof(negative[0]);

        for (int i = 0; i < n; i++)
        {
            if (sizeofpos>sizeofneg)
            {
                for (int i = 0; i < sizeofneg; i++)
                {
                    arr[2*i]=postive[i];
                    arr[2*i+1]=negative[i];
                } 
                int index = sizeofneg*2;
                for (int i =sizeofneg; i < sizeofpos; i++)
                {
                    arr[index]=postive[i];
                    index++;
                }
            }else{
                for (int i = 0; i < sizeofpos; i++)
                {
                    arr[2*i]=postive[i];
                    arr[2*i+1]=negative[i];
                } 
                int index = sizeofpos*2;
                for (int i =sizeofpos; i < sizeofneg; i++)
                {
                    arr[index]=negative[i];
                    index++;
                }
            }
            
        }
        
    }
    
}