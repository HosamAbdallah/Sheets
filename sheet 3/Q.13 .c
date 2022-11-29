


/** Q.13 sheet_3 time(9.57) **/

/** Function bt7seb akbar far2 ben 2 elements gowa l array**/
/** 5ale balek fe (case) me7taga tthandel lw awel raqam akbar mn l ba3do */

int array_BigDeff(int*arr,int size)
{
    int i,j,def=0,max=0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)/** bad2t j=i+1 3shan ageb element wl b3do 3la tol*/
        {
            def=arr[j]-arr[i];
            if(def>max)
            {
                max=def;
            }
        }
    }
    return max;
}


int main()
{
    int arr[]= {100,1,5,3,6,9,7,2};
    int size=sizeof(arr)/sizeof(*(arr));
    int def=array_BigDeff(arr,size);
    printf("def=%d\n",def);    
	return 0;
}


