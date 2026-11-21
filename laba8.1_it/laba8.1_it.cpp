#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str, char c) // кількість символів c у рядку
{
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            k++;
    return k;
}

char* Change(char* str) // заміна кожного слова "BASIC" на "Delphi"
{
    int len = strlen(str);

    char* tmp = new char[len * 6 / 5 + 1]; // "Delphi" довше за "BASIC" на 1 символ
    char* t = tmp;

    tmp[0] = '\0';

    int i = 0;
    while (i < len)
    {
        if (str[i] == 'B' && str[i + 1] == 'A' && str[i + 2] == 'S' && str[i + 3] == 'I' && str[i + 4] == 'C')
        {
            strcat(t, "Delphi");
            t += 6;
            i += 5;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }

    return tmp;
}

int main()
{
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "B : " << Count(str, 'B') << endl;
    cout << "A : " << Count(str, 'A') << endl;
    cout << "S : " << Count(str, 'S') << endl;
    cout << "I : " << Count(str, 'I') << endl;
    cout << "C : " << Count(str, 'C') << endl;

    char* dest = Change(str);

    cout << "Modified string: " << dest << endl;

    delete[] dest;

    return 0;
}
