#include <iostream>
#include <vector>
using namespace std;

bool is_palindrome(int num)
{
    // Chuyển số thành chuỗi để kiểm tra đối xứng
    string num_str = to_string(num);

    // Kiểm tra xem chuỗi có đối xứng hay không
    if (num_str == string(num_str.rbegin(), num_str.rend()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sum_palindromes(vector<int> arr)
{
    // Tạo một vector để lưu trữ các số đối xứng
    vector<int> palindromes;

    // Tính tổng các số đối xứng trong mảng
    int total = 0;
    for (int num : arr)
    {
        if (is_palindrome(num))
        {
            palindromes.push_back(num);
            total += num;
        }
    }

    return total;
}

int main()
{
    // Nhập mảng từ người dùng
    vector<int> arr;
    int n, num;
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhập phần tử thứ " << i + 1 << ": ";
        cin >> num;
        arr.push_back(num);
    }

    // Tính tổng các số đối xứng trong mảng và in kết quả
    int total_palindromes = sum_palindromes(arr);
    cout << "Tổng các số đối xứng trong mảng là: " << total_palindromes << endl;

    return 0;
}
