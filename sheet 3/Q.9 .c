


/** Q.9 sheet.3 **/
int array_longest_series_for_Num(int*arr,int size,int*longest)
{
    int i,c,max,num;
    c=0;
    max=0;
    num=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
            c++;
        }
        else
        {
            num=arr[i];
            if(c>max)
            {
                max=c;
                *longest=arr[i-1];
            }
            c=1;
        }
    }
    return max;
}

void array_print(int *arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%2d  ",arr[i]); // arr[i]....*(arr+i) there're same
    }
    printf("\n");
}


int main()
{
	int ar[]={10,1,2,5,33,5,5,10,10,10,33,33,33,33,33,5,8};
    int sz=sizeof(ar)/sizeof(*(ar));
	array_print(ar,sz);
    int lng=array_longest_series_for_Num(ar,sz,&nm);
    printf(" the num is:%d and it's longest occurenace :%d\n \n \n",nm,lng);// nm=33 , lng=5 
	return 0;
}
