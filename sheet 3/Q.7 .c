

/** Q.7 sheet_3 **/

void array_swap(int*arr1,int size_1,int*arr2,int size_2)
{
    int temp;
    if(size_1>size_2)
    {
        size_1=size_2;
    }
    for(int i=0; i<size_1; i++)
    {
        // swap arr2 in arr1
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
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
   int arr2[]= {1,2,3,4};
   int arr1[]= {10,20,30,40,50};

	/** ha2sem size l array kolo 3la size first elemnt=4 3shan ageb 3dad L elements **/
    int size1=sizeof(arr1)/sizeof(*(arr1));
    int size2=sizeof(arr2)/sizeof(*(arr2));

    printf("print arrays before swapping\n");
    printf("\n");
    array_print(arr1,size1);
    array_print(arr2,size2);
    printf("\n");

    printf("print arrays after swapping\n");
    printf("\n");
    array_swap(arr1,size1,arr2,size2);
    array_print(arr1,size1);
	array_print(arr2,size2);
	return 0;
}





