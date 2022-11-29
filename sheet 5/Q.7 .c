
/** (7) Write c function to copy string to string without copy repeated characters
		try (O(n)). "ahmed selem kamel"->"ahmed slk" **/

/** Q.7 sheet.5 **/
void string_copy_Nonrepeat(unsigned char* str1,unsigned char* str2)
{
    unsigned char count[256]= {0};//freq array
    unsigned char j=0,i;
    for(i=0; str1[i]; i++)
    {
        if(count[str1[i]]==0)/** hashof fe ay element=0 y3ne maknsh mwgod abl kda **/
        {
            str2[j]=str1[i];
            count[str1[i]]=1;
            j++;
        }
    }
}

int main()
{
	char str[]="hosam Abdallah";
    char str2[256];
    string_print(str);
    string_copy_Nonrepeat(str,str2);
    string_print(str2);
	return 0;
}


