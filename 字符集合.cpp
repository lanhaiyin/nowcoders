题目描述
输入一个字符串，求出该字符串包含的字符集合
输入描述:
每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。
输出描述:
每组数据一行，按字符串原有的字符顺序，输出字符集合，即重复出现并靠后的字母不输出。
示例1
abcqweracb
输出
abcqwer

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    string str;
    char arr[256] = { 0 };
    int i = 0;
    while (getline(cin, str))
    {
        i = 0;
        while (i < str.size())
        {
            if (arr[str[i]] < 1)
            {
                cout << str[i];
                arr[str[i]]++;
            }
            i++;
        }
            
        cout << endl;
        memset(arr, 0, 256);
        str = "";
    }
    return 0;
}
