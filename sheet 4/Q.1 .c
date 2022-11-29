


/** Q.1 sheet.4 **/

void string_reverse(char* str)
{
    char i, size, j;
	char temp;
	size=string_length(str);
	j=size-1;
	for (i=0; i<size/2; i++)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		j--;
	}
}


int main()
{
	char str[]="Hosam Abdallah";
    string_print(str);
    string_reverse(str);
    string_print(str);
	return 0;
}
