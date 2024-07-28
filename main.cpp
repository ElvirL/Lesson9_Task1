/*
Задача 1
Напишите программу, которая принимает от пользователя текст (то есть некоторую строку) и ещё слово (то есть ещё строку) и подсчитывает, 
сколько раз слово встречается в тексте. Более точно: сколько в данном тексте существует позиций, начиная с которых можно прочитать данное слово.

Замечание. Если вводить строку обычным способом с помощью команды std::cin >> s, то С++ проигнорирует все символы после первого пробела, 
потому что пробел по умолчанию считается концом вводимой строки. Чтобы ввести строку с пробелами, нужно вместо команды
std::cin >> s;
использовать команду
std::getline(std::cin, s);
Пример ввода:
mama myla ramu
my
Ответ: 1.
Пример ввода:
abudabudabdab
dab
Ответ: 3.
*/

#include <iostream>

using namespace std;

int  main(){
    setlocale(LC_ALL, "Russian");
    string text, word;
    cout << "Введите текст: ";
    getline(cin, text);
    cout << "Введите слово: ";
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
    cout << "Ответ: " << counter;

}