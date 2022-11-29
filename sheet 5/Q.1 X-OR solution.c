


/** https://www.geeksforgeeks.org/find-the-missing-number/
    we using method(2)...X-OR **/
	
/** Q.1 sheet_5 */

int array_getMissingNo(int *arr,int size)
{
    int x1=0;   //x1...gowaha l arqam bta3t l array
    int x2=0;   //x2...gowaha l arqam mn 0 to 100
    int i;
    for(i=0; i<size; i++)
    {
        x1=x1^arr[i]; //X-OR with Elements
    }
    for(i=0; i<=size; i++)
    {
        x2=x2^i; //X-OR with index 
    }
    return (x1 ^ x2);
}

int main()
{
    int arr2[]={0,1,3,4,5};
     int size2=sizeof(arr2)/sizeof(*(arr2));
     int numbe;
    int get=array_getMissingNo(arr2,size2);
    printf("get=%d\n",get);


   return 0;
}






