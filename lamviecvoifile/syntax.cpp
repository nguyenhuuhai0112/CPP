//đọc file lên chưong trình dùng :fstream
//đọc dưx liệu từ chương trình cuống 1 file: ofstream






#include<fstream>
#include<iostream>
using namespace std;
    int main()
    {
        fstream fs;
        fs.open("test.txt"); //mo file
        if(fs.is_open()) 
        {
           cout<<"mo file thanh cong" ;    
        }
        fs <<"hello world!";//ghi file
    return 0; 
    }