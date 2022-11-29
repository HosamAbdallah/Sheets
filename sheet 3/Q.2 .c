
/** (2) Write a C function to return the maximum and minimum number in an 
	array and their indexes **/

/** Q.2 sheet_3*/

void max_min_NumandIndex(int* arr,int size,int*max,int*min,int *max_i,int *min_i)
{
    *max=arr[0];
    *min=arr[0];
    *max_i=0;
    *min_i=0;
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i]>*max)
        {
            *max=arr[i];
            *max_i=i;
        }
        else{}
        if(arr[i]<*min)
        {
            *min=arr[i];
            *min_i=i;
        }
        else{}
    }
    printf("Max number:%d his index:%d==========Min number:%d index:%d\n",*max,*max_i,*min,*min_i);
}


int main()
{
    int arr[]={2,19,31,45,61,7,2,2,2,2,26,6,19,31,5,175,61};
    int siz=sizeof(arr)/sizeof(*(arr));
    int max,min,max_i,min_i;
    max_min_NumandIndex(arr,siz,&max,&min,&max_i,&min_i);
	return 0;
}
