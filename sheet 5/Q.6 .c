



/** Q.6 sheet.5 **/
int string_find_firstChar_rep(unsigned char*str)
{
    unsigned char count[256]={0};//freq string
    int i,max=0;
    for(i=0;str[i]!='\0';i++)
    {
        count[str[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(count[i]>count[max])
        {
            max=i;
        }
    }
    return max;
}

int main()
{
	char sstr[]="hosam AbdallaH";
	string_print(sstr);
    printf("%c\n",string_find_firstChar_rep(sstr));
	return 0;
}
