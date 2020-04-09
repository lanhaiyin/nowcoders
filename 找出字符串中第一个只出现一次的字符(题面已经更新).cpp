题目描述
找出字符串中第一个只出现一次的字符

 

 

 

输入描述:
输入一个非空字符串

输出描述:
输出第一个只出现一次的字符，如果不存在输出-1

示例1
输入
asdfasdfo

输出
o

#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*string str;
    while(getline(cin,str))
        {
          int i;
        for (i=0;i<str.size();i++)
            {
            if(str.find(str[i])==str.rfind(str[i]))
            {
                cout<<str[i]<<endl;
                    break;
            }
        }
        if(i==str.size())
            cout<<-1;
    }
    return 0;
    */
    string str;
    while (getline(cin, str))
    {
        int i = 0;
        int count[26] = {0};
        for (;i < str.size(); i++)
        {
            count[str[i]-'a']++;
        }
        for (i = 0; i < str.size(); i++)
        {
            if (count[str[i]-'a'] == 1)
            {
                cout << str[i]<<endl;
                break;
            }
        }
        if (i == str.size())
            cout << -1<<endl;
    }
        
    return 0;
    
}
