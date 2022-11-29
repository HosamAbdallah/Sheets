


/** Q.10 sheet.3 **/
void array_merge(int*arr1,int*arr2,int*arr3,int size1,int size2)
{
    int i;
    for(i=0;i<(size1+size2);i++)
    {
        if(i<size1)
        {
            arr3[i]=arr1[i];
        }
        else
        {
            arr3[i]=arr2[i-size1];/** kda harga3 a7ot elements bta3t arr2 gowa l arr3 mn l so9yer ll keber **/
        }
    }
}


int main()
{	
	int ar[]={1,2,3,4};
    int ar2[]={10,20,30,40};
    int ar3[100];
    int sz=sizeof(ar)/sizeof(*(ar));
    int sz2=sizeof(ar2)/sizeof(*(ar2));
    array_merge(ar,ar2,ar3,sz,sz2);
    array_print(ar3,(sz+sz2));
	return 0;
}
