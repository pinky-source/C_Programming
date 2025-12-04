#include<stdio.h>
int main()
{
    int a[] = {11,45,22,56,7};
    int i, j, temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
            else{
                continue;
            }
        }
    }
    printf("stored array=\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
        
    }
}