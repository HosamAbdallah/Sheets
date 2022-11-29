
/**  2) You have an array of 101 element contain all number from 1 t0 100, so one 
		number is repeated, write c function to find the repeated number (try in O(n)) */
		
/** Q.2 sheet_5 **/

char array_Find_RepeatedNum_twice(char* arr,char size)
{
  char i;
  char count[101]={0};
  for(i=0;i<size;i++)
  {
      count[arr[i]]++;
  }
  for(i=0;i<101;i++)
  {
      if(count[i]>1)
      {
          return i;
      }
  }
  return -1;
}

int main()
{
	char arr[] = {0,1,2,3,4,5,6,7,8,8};
    char size=sizeof(arr)/sizeof(*(arr));
    printf("size4=:%d\n",size);
    char repeat=array_Find_RepeatedNum_twice(arr,size);
    printf("\n Max repeat is:%d  \n",repeat);//repeat=8
	return 0;
}

