# Mini-Max Sum

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers

[Mini-Max Sum - HackerRank](https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true)

# Soluton

```
void miniMaxSum(vector<int> arr) {
    long minSum = 0, maxSum = 0;
    
    sort(arr.begin(), arr.end());
    for(int i = 0; i < 4; ++i){
        minSum += arr[i];
    }
    for(int i = 1; i < 5; ++i){
        maxSum += arr[i];
    }
    
    cout << minSum << " " << maxSum << "\n";
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}
```