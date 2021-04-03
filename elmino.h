#include <iostream>
//######################################################

std::string ReverseMe(std::string msg)
{
    std::string result = "";
    for(int i=0;i<msg.length();i++)
    {
        result = msg[i]+result ;
    }
    return result;
}
//######################################################
int lens(std::string msg)
{
    return msg.length(); 
}
//######################################################

int lena(int msg[])
{
    int i = 0;
    while (msg[i]!='\0')
    {
        i+=1;
    }
    return i;

}
//######################################################
std::string Range(std::string msg,int start,int end)
{
    std::string result;
    if(start > end)
    {
        for(int i = start;i<end;i++)
        {
            result += msg[i];
        }
    }
    else
    {
        for(int i = end;i<start;i++)
        {
            result += msg[i];
        }
    }
    return result;
}
//######################################################
std::string Bool(bool msg)
{
    if(msg)
    {
        return "true";
    }
    return "false";
}
//######################################################
int Max(int num[])
{
    int lenght = lena(num);
    int max = 0;
    for(int i = 0;i<lenght;i++)
    {
        if(max<num[i])
        {
            max = num[i];
        }
    }
    return max;
}
//######################################################
int Min(int num[])
{
    int lenght = lena(num);
    int max = num[0];
    for(int i = 0;i<lenght;i++)
    {
        if(max>num[i])
        {
            max = num[i];
        }
    }
    return max;
}
//######################################################
int Get_int(std::string msg)
{
    int result;
    std::cout<<msg;
    std::cin>>result;
    return result;
}
//######################################################
std::string 

