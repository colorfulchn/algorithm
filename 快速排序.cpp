void  quickSort(vector<int> &num,int i,int j){
    int tmp = num[i];
    int begin = i;
    int end = j;
    if(begin >= end ) return;
    while(begin!=end)
    {
        while (tmp < num[end] && begin < end) end--;
        if(begin< end)num[begin] = num[end];

        while (tmp >= num[begin] && begin < end) begin++;
        if(begin<end)num[end] = num[begin];
    }
    num[begin] = tmp;
    quickSort(num, i,begin-1);
    quickSort(num, begin + 1, j);
}

int main()
{
    vector<int> sort(6);
    sort[0] = 3;
    sort[1] = 2;
    sort[2] = 1;
    sort[3] = 5;
    sort[4] = 6;
    sort[5] = 4;
    quickSort(sort, 0, 5);
    for (int i = 0; i <= 5; i++)
        cout << sort[i];
}