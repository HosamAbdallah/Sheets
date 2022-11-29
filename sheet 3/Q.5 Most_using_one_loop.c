

// Q.5 sheet.3 using one loop
int array_mostRepNum_2(int* arr,int size)
{
    int arr2[10]={0};//freq array
    int i,max=0,c=0;
    for(i=0;i<10;i++)
    {
        if( arr2[arr[i]]==0 )
        {
            arr2[arr[i]]=1;
        }
        else
        {
            c++;
            max=i;
        }
    }
    printf("the num is repeated:%d\n",c);
    return arr[max];
}

int main()
{
    int arr[10]= {10,2,3,3,5,3,7,8,3,9};
    int x=array_mostRepNum_2(arr);
    printf("\n Max repeat is:%d \n",x);
    return 0;
}