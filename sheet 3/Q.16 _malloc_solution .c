

/** Q.16 sheet_3 time(10.05) using malloc **/

void array_print(int *arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%2d  ",arr[i]); // arr[i]....*(arr+i) there're same
    }
     printf("\n");
}


int* fabo2_2(int n)
{
    int*arr=(int*)malloc(n*sizeof(int));
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++)
    {
        arr[i]=arr[i-1]-arr[i-2];
    }
    return arr;
}

int main()
{
    int*arr22=fabo2_2(40);
    array_print(arr22,40);
	return 0;
}

