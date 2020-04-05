
题目描述
请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。


class Solution {
public:
	void replaceSpace(char *str,int length) {
        int len = length;
        char *cur = str;
        
        int num = 0;
        while(len--)
        {
            if(*cur == ' ')
                num++;
            cur++;
        }
        char * str2 = new char[length + (num+1) *2];
        memset(str2,0,length + (num+1) *2);
        char *cur2 = str2;
        len = length;
        cur = str;
        while(len--)
        {
            if(*cur == ' ')
            {
                *cur2++ = '%';
                *cur2++ = '2';
                *cur2++ = '0';
            }
            else
            {
                *cur2++ = *cur;
            }
            cur++;
        }
        strcpy(str,str2);
	}
};
