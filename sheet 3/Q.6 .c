
/**(6) Write a C function to take an array and reverse its elements **/
/** Q.6 sheet_3 **/

void array_rev(int *arr,int size)
{
    int temp;
    int j=size-1;
    for(int i=0; i<size/2; i++)/**lazem t2sem (size/2) 3shan mayrg3sh nfs l array*/
    {
		
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;/** lazem ttra7 (j--) 3shan tgeb l index ely ba3do*/
    }
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

   int array[10]={0,10,20,30,40,50,60,80,90,100};
   array_print(array,10);
    array_rev(array,10);
   array_print(array,10);
   return 0;
}