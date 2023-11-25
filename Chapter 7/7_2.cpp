#include <iostream>
using namespace std;

int main() {

  int n;
  // Hiển thị thông báo yêu cầu nhập số lượng phần tử
  cout << "Nhập số lượng phần tử của mảng: ";
  // Nhập giá trị từ bàn phím
  cin >> n;

  // Khai báo một mảng số nguyên có kích thước n
  int arr[n];
  // Sử dụng một vòng lặp for để duyệt qua các phần tử của mảng
  for (int i = 0; i < n; i++) {
    // Hiển thị thông báo yêu cầu nhập giá trị cho phần tử thứ i + 1
    cout << "Nhập giá trị cho phần tử thứ " << i + 1 << ": ";
    // Nhập giá trị từ bàn phím và lưu vào mảng
    cin >> arr[i];
  }

  // Khai báo một biến để lưu trữ phần tử lớn nhất của mảng
  int max = arr[0];
  // Sử dụng một vòng lặp for để duyệt qua các phần tử của mảng
  for (int i = 1; i < n; i++) {
    // Nếu phần tử thứ i lớn hơn max
    if (arr[i] > max) {
      // Cập nhật max bằng phần tử thứ i
      max = arr[i];
    }
  }

  // Hiển thị kết quả
  cout << "Phần tử lớn nhất của mảng là: " << max << "\n";

  return 0;
}
