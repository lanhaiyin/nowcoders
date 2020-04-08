题目描述
将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不是一个合法的数值则返回0
输入描述:
输入一个字符串,包括数字字母符号,可以为空
输出描述:
如果是合法的数值表达则返回该数字，否则返回0
示例1
输入
复制
+2147483647
    1a33
输出
复制
2147483647
    0


class Solution {
public:
    int StrToInt(string str) {
        if (str.size() == 0)
            return 0;
        size_t num = 0;
        int i = 0;
        int f = 0;
        if (str[i] == '-')
            i++,f = -1;
        else if (str[i] == '+')
            i++,f = 1;
        else if (str[i]>='0' && str[i] <= '9')
            f = 1;
        if (f == 0)
            return 0;
        while(i < str.size())
        {
            if (str[i]>='0' && str[i] <= '9')
            {
                num *= 10;
                num += str[i]-'0';
                i++;
            }
            else
            {
                return 0;
            }
            if (f == 1 && num > 2147483647)
                return 0;
            else if (f == -1 && num > 2147483648)
                return 0;
        }
        return f * num;
    }
};
