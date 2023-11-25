//ifstream inputFile("ten file"): mo file de doc
// đọc từng dòng và in ra màn hình 
/*string line;
  while (getline(inputFile, line)) {
    cout << line << endl;*/
//inputFile.close(); 




//ofstream outputFile("tem file"): mo file de ghi
//outputFile<< "hello "<< endl; : ghi du lieu vao file
//outputFile.close(); : dong file
#include<iostream>
#include<fstream>
using namespace std;
      int main(){
        string str;
        ifstream file ("example.txt");
        while (getline (file, str))
        {
          /* code */cout<<str;
        }
        
        file.close();
      return 0; 
      }
        