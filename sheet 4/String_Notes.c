
/*****************************************************************
                        Lec.10 & Lec.11
/*****************************************************************/

#include "String_Notes.h"


/* Lec.11 at 6.22 */
void string_scan(char*str)
{
    int i=0;
    scanf(" %c",&str[i]);//aw3a tnsa t7ot msafa abl --> " %c" 3shan tshel l enter l hattabe3
    for(; str[i]!='\n';)//bloop l7ad lma may5shole enter
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;//nullChar: 3shan amsa7 l enter
}

void string_print(char*str)
{
    char i;
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

/* brief: this func counts all Character to the nullChar.
   corner case: When there is a ('/0' or 0) in string bto2af w tga3lak fe kam Character.
*/
int string_length(char*str)
{
    int i;
    for(i=0; str[i]; i++)
    {
    }
    /* barga3 3dad l 7rof bta3t l string l7ad ma awsal ll nullChar */
    return i;
}

/* brief: convert any UpperChar to LowerChar */
void string_UperToLower(char*str)
{
    char size=string_length(str);
    char i;
    for(i=0; str[i]; i++)
    {
        if( (str[i]>='A')&&(str[i]<'Z') )
        {
            str[i]+='a'-'A';
        }
    }
}

int string_compare(char*str1,char*str2)
{
    char i;
    for(i=0; str1[i] || str2[i] ; i++)
    {
        if(str1[i]!=str2[i])
        {
            return 0;
        }
    }
    return 1;
}

/* brief: ay char small ytqren bnfs char capital -> pass this case.
          EX: Ahmed
              ahmed ---> Out: equal
*/
int string_compareNotCaseSenetive(char*str1,char*str2)
{
    string_UperToLower(str1);
    string_UperToLower(str2);
    char i;
    for(i=0; str1[i]; i++)
    {
        if(str1[i]!=str2[i])
        {
            return 0;
        }
    }
    return 1;
}

void string_longestWord(char*str,char*word)
{
    int i,c=0,max=0;
    int index=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]==' ')//check lw la2et msafa hasfar l counter ,
        {
            if(c>=max)
            {
                max=c;
                index=i-max;//mkan awel char l atwal kelma
            }
            c=0;
        }
        else
        {
            c++;
        }
    }
    /* check after last space */
    if(c>=max)
    {
        max=c;
        index=i-max;//mkan awel char l atwal kelma
    }
    printf("%d   %c\n",max,str[index]);//batba3 aktar kelma mtqrara , w awel Char feha
    char j=index;
    for(i=0;i<max;i++)
    {
        word[i]=str[j];//7ot index.1 - index.2 .... gowa word[i]
        j++;
    }
    word[i]=0;
}

void intToString(char*str,int num)
{
    int i,rem=0;
    if(num==0)
    {
        str[0]='0';
        //str[1]=0;
        return;
    }
    for(i=0;num>0;i++)
    {
        rem=num%10;
        rem=rem+'0';//convert from int to Char (Ascii)
        num=num/10;
        str[i]=rem;
    }
    str[i]=0;//3shan amsa7 l enter
    string_reverse(str);//3shan l (num) kan bytla3 m3kow
}

void string_reverse(char*str)
{
    int i;
    int size=string_length(str);
    int temp=0,j=size-1;
    for(i=0;i<size/2;i++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
}
/* lec.12 at 7:40 */
int stringToInt(char*str)
{
    int i,num=0;
    for(i=0;str[i];i++)
    {
        if( (str[i]>='0') && (str[i]<='9') )
        num=num*10 + str[i]-'0';
    }
    return num;
}

void string_copy(char*source,char*copy,int maxSize)
{
    int i;
    for(i=0;source[i]&&i<maxSize-1;i++)
    {
        copy[i]=source[i];
    }
    copy[i]=0;
}


void string_swap(unsigned char*str1,unsigned char*str2,unsigned char*temp)
{
	unsigned char i;
	printf("enter first string:");
	string_scan(str1);
	printf("enter second string:");
	string_scan(str2);
	while(str1[i]!='/0')
	{
		temp[i]=str1[i];
		i++;
	}
	temp[i]=0;
	i=0;
	while(str2[i]!='/0')
	{
		str1[i]=str2[i];
		i++;
	}
	str1[i]=0;
	i=0;
	while(temp[i]!='/0')
	{
		str2[i]=temp[i];
		i++;
	}
	str2[i]=0;
}
