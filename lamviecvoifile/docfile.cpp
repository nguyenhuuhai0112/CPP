#include<fstream>
#include<iostream>
using namespace std;
    int main(){
        fstream file;//tạo đối tượng 

        file.open("test.txt");       

            if(!file.is_open()) //( ! )file khong duoc mo se tra ve true
            {                   // file duoc mo se tra ve false
                return 1;
            }
            string str;
            
            getline(file, str);

            cout<<str;
    return 0;        
    }