链接：https://www.nowcoder.com/questionTerminal/e016ad9b7f0b45048c58a9f27ba618bf
来源：牛客网

有一个整数数组，请你根据快速排序的思路，找出数组中第K大的数。

给定一个整数数组a,同时给定它的大小n和要找的K(K在1到n之间)，请返回第K大的数，保证答案存在。

测试样例：
[1,3,5,2,2],5,3
返回：2



class Finder {
public:
    void Knum(vector<int>& a, int begin, int end, int K)
{
    if (begin >= end)
        return;
    int left = begin;
    int right = end-1;
    int key = end;
    while (left < right)
    {
        while (left < right && a[left] < a[key])
            left++;
        while (left < right && a[right] >= a[key])
            right--;
        swap(a[left], a[right]);
    }
    if (a[key] < a[right])
    {
        swap(a[key], a[right]);
        if (right < K)
            Knum(a, right + 1, end, K);
        if (right > K)
            Knum(a, begin, right - 1, K);
    }
    Knum(a, begin, end - 1, K);
         
}
int findKth(vector<int>& a, int n, int K) {
    // write code here
    Knum(a, 0, n - 1, n - K);
    return a[n - K];
}
};
