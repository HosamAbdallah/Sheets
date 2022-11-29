


/** Q.2 sheet.4 **/
int string_Is_mirror(char*str)
{
    char size=string_length(str);
    char start=0,end=0;
    end=size-1;
    if(size==1)/** bt check lw l string 7arf wa7ed **/
    {
        return 0;
    }
    while(start<end)
    {
        if(str[start]!=str[end])/** bt check.. awel 7arf (msh howa) a5er 7arf **/
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{
	 char str2[]="SalaS";//mirror
     char str3[]="SalGeaS";//Not mirror
     if(string_Is_mirror(str3))
     {
         printf("\n \n the string is mirror \n \n");
     }
     else
     {
         printf("\n \n the string is Not mirror \n \n");
     }
	 return 0;
}