
/** Q.1 sheet_5 */
/** this function is using frequency array Method **/

int array_getMissingNo_2(int* arr,int size)
{
    char num[101]={0}; //num[101] is Freq array....O(k)=O(n) 3shan 3dad l e7tmalat ad 3adad l data
    int i;
    for(i=0;i<size;i++)
    {
        num[ arr[i] ]++; //awel mla2e L element a7ot 1...num[arr[1]] ha7ot 1 lw arr[1]=1....bs bshart arr[i]=ay raqam m3ada 0
    }
    for(i=0;i<101;i++)
    {
        if(num[i]==0) //da m3nah eny la2et l index bta3 l element mafehosh haga 
            return i;
            else{}
    }
    return -1;
}

int main()
{
    int arr2[]={0,1,2,4,5,6,7,8,9};
    int size2=sizeof(arr2)/sizeof(*(arr2));
    int get=array_getMissingNo(arr2,size2);
    printf("get=%d\n",get); //get=3
    return 0;
}