#include <iostream>
#include <string>
using namespace std;
bool low_to_upper(string& char_arr);
int main()
{
	bool end = true;
	string charr;
	while (end)
	{
		cout << "영문 문자열을 입력하시오 : ";
		getline(cin, charr);
		end = low_to_upper(charr);
		if (charr.size() == 1 && charr[0] == 'q')
			cout << "끝.";
		else
			cout << charr << endl;
	}
	return 0;
}
bool low_to_upper(string& char_arr)
{
	if (char_arr.size() == 1 && char_arr[0] == 'q')
		return false;
	else
		for (int i = 0; char_arr[i] != '\0'; i++)
			if (islower(char_arr[i]))
				char_arr[i] = toupper(char_arr[i]);
	return true;
}