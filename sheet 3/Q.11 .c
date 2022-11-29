
/** https://www.geeksforgeeks.org/remove-duplicates-sorted-array/ **/

/** Q.11 sheet.3 **/

int array_unrepeat_duplicate_elements(int*arr,int size)
{
    int i;
    int j=0;// To store index of next unique element
    for(i=0;i<size;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[j++]=arr[i];
        }
    }
    arr[j]=arr[size-1];/**3amlt kda....3shan ma ygblesh garabge **/
    return j;
}

int main()
{
	int x;
    int array1[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    x = sizeof(array1)/sizeof(array1[0]);
    array_print(array1,x);
    x=array_unrepeat_duplicate_elements(array1,x);
    array_print(array1,x);
    return 0;
}