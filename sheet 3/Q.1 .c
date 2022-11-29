


/** Q1.Sheet.3 **/

int find_lastNum_index(int*arr,int size,int num)
{
    int occ=0,i;
    for(i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            occ=i;
        }
    }
    if(occ>=0)
        return occ;
    else
        return -1;
}


int main()
{
	int num;
    printf("enter number:");
    scanf("%d",&num);

    int arr[]={0,2,19,31,45,61,7,2,2,2,2,26,6,19,31,5,75,61};
    int siz=sizeof(arr)/sizeof(*(arr));
    int fin=find_lastNum_index(arr,siz,num);
    printf("the index of LAST occurrence of a number is: %d\n",fin);
	return 0;
}