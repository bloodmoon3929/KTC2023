#include <iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
    int count = 0;
    char ch;
    string open_txt;
    ifstream inFile;
    cout << "데이터 파일의 이름을 입력하시오: ";
    getline(cin, open_txt);
    inFile.open(open_txt);
    if (!inFile.is_open())
    {
        cout << "파일을 여는것에 실패하였습니다.";
        exit(EXIT_FAILURE);
    }
    inFile.get(ch);
    while (!inFile.eof())
    {
        count++;
        cout << ch;
        inFile.get(ch);
    }
        
    cout << "\n총 "<<count<<"개의 문자가 있습니다.";
    inFile.close();
    return 0;
}