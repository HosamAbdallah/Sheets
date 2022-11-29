

/** Q.9 sheet.5 **/
unsigned short swap_SHORTbytes(short num)
{
    int arr[16]={0};
    int temp=0,i;
    // e3ml 3 for loop
    for(i=0;i<16;i++)
    {
        //read num
        arr[i]=(num>>i&1);
    }
    for(i=0;i<8;i++)
    {
        temp = temp|(arr[i]<<(i+8));/** in set_bit: read num badal ma7ot (1) **/
    }
    for(i=8;i<16;i++)
    {
        temp = temp|(arr[i]<<(i-8));
    }
    num=temp;
    return num;
}

int main()
{
    unsigned short nu;
    nu = 0x20FE;
    printf("%x\n",nu);
    nu=swap_SHORTbytes(nu);
    printf("%x\n",nu);
