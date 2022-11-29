

/* Q.3 sheet.4 */

//Add your code here!!!!!!!!!!!!!
void string_Reverse_word(char*s,char start,char end)
{
    char temp=0;
    for(; start<end;)
    {
        //swap
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
}

void string_Reverse_all_words(char*str)
{
    //Reverse all words bs ma2loben
    int len=string_length(str);
    int start=0,i=0;
    for(i=0; str[i]!='\0'; i++)
    {
		
    }
    string_Reverse_word(str,start,len-1);//i-1 --> 3shan a5er 7arf maykonsh nullChar

    //Reverse each word tany bs ma3dolen
    for(i=0; str[i]; i++)
    {
        if(str[i]==' ')
        {
            string_Reverse_word(str,start,i-1);
            start=i+1;
        }
    }
    string_Reverse_word(str,start,i-1);
}
// End of your code!!!!!!!!!!!!!!!!!


int main()
{
    char str[]="hosam AbdallaH MekhamerR";
    string_print(str);
    char start,end;
    string_Reverse_all_words(str);
    string_print(str);
    return 0;
}