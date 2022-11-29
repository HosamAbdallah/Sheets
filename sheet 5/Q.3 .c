

/* 3) You have an array of integers all numbers in the array repeated 2 times 
	  except one number repeated one time only find this number (try o(n)).
	  array like {1,2,4,66,2,1,500,66,7,7,500}->4 */

/** Q.3 sheet_5 **/

char array_Find_NotRepeatedNum(char* arr,char size)
{
  char i;
  char count[101]={0};
  for(i=0;i<size;i++)
  {
      count[arr[i]]++;
  }
  for(i=0;i<101;i++)
  {
      if(count[i]==1)
      {
          return i;
      }
  }
  return -1;
}

int main()
{
	char arr4[]={1,2,4,66,2,1,500,66,7,7,500};
    char size4=sizeof(arr4)/sizeof(*(arr4));
    char NotRepeat=array_Find_NotRepeatedNum(arr4,size4);
    printf("\n Not repeated Num is:%d  \n",NotRepeat);//NotRepeat=4
    return 0;
}
	
	
	