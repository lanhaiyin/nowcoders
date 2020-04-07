题目描述
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。


class Solution {
public:
    void reOrderArray(vector<int> &array) {
        
        int i = 0;
    int j = 0;
    while (i < array.size() && j < array.size())
    {
        while (i < array.size() && array[i]%2 != 0)
        {
            i++;
        }
        j = i;
        while (j < array.size() && array[j]%2 != 1)
        {
            j++;
        }
        if(i < array.size() && j < array.size())
            for (int k = j-1; k >=i; k--)
            {
                if (array[k] % 2 == 0)
                {
                    swap(array[k], array[j]);
                    j = k;
                }
                    
            }
        i++;
    }
        
        /*
        //暴力，两数组
        vector<int> brr;//奇数
        vector<int> crr;//偶数
        int i = 0;
        while(i < array.size())
        {
            if (array[i]%2 == 1)
            {
                brr.push_back(array[i]);
            }
            else
            {
                crr.push_back(array[i]);
            }
        }
        i = 0;
        while(i < brr.size())
        {
            array[i] = brr[i];
        }
        i = 0;
        while(i < crr.size())
        {
            array[i+brr.size()] = crr[i];
        }
        */
    }
};
