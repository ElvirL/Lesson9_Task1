/*
������ 1
�������� ���������, ������� ��������� �� ������������ ����� (�� ���� ��������� ������) � ��� ����� (�� ���� ��� ������) � ������������, 
������� ��� ����� ����������� � ������. ����� �����: ������� � ������ ������ ���������� �������, ������� � ������� ����� ��������� ������ �����.

���������. ���� ������� ������ ������� �������� � ������� ������� std::cin >> s, �� �++ ������������� ��� ������� ����� ������� �������, 
������ ��� ������ �� ��������� ��������� ������ �������� ������. ����� ������ ������ � ���������, ����� ������ �������
std::cin >> s;
������������ �������
std::getline(std::cin, s);
������ �����:
mama myla ramu
my
�����: 1.
������ �����:
abudabudabdab
dab
�����: 3.
*/

#include <iostream>

using namespace std;

int  main(){
    setlocale(LC_ALL, "Russian");
    string text, word;
    cout << "������� �����: ";
    getline(cin, text);
    cout << "������� �����: ";
    getline(cin, word);

    size_t index = 0;
    int counter = 0;
    while (index < text.size()){
        if (text[index] == word[0]){
            for (size_t i=1; i<word.size() && index+i< text.size(); ++i){
                if (text[index+i] != word[i]){
                    break;
                }
                if (text[index+i] == word[word.size()-1]){
                    ++counter;
                    index = index + i;
                }
            }

        }
        ++index;
    }
    cout << "�����: " << counter;

}