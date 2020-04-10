题目描述
计算字符串最后一个单词的长度，单词以空格隔开。
输入描述:
一行字符串，非空，长度小于5000。

输出描述:
整数N，最后一个单词的长度。

示例1
输入
hello world
输出
5


#include <iostream>
#include <string>
using namespace std;
/*
int main(){
    string str;
    int count = 0;
    while (cin >> str && str != "")
    {
        count = str.size();
    }
    cout << count<<endl;
    return 0;
}
*/

int main(){
    string str;
    while(cin >> str);
    cout << str.size();
    return 0;
}
/*
int Calc_Word_Length(string &str)

{

  if(str.empty())

    return 0;

  int index = str.rfind(' ');

  if(index == string::npos)

    return str.size();

  return str.size()-index-1;

}



int main()

{

  string str;

  getline(cin, str);

  int len = Calc_Word_Length(str);

  cout<<len;

  return 0;

}
*/
