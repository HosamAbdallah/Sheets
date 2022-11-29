

/** Q.13 sheet_3...Akram solution **/
int array_bigDeff_2(int* arr,int size)
{
    int i,min,def;
    min=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            def=0;
        }
        if(def<(arr[i]-min))
        {
            def=arr[i]-min;
        }
    }
    return def;
}