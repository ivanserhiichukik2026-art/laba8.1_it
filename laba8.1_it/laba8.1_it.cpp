#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str, char c) // кількість символів у рядку
{
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            k++;
    return k;
}

char* Change(char* str) // заміна кожного слова "BASIC" на "Delphi"
{
    int len = strlen(str); // довжина рядка

    char* tmp = new char[len * 6 / 5 + 1]; // новий рядок під результат , 
    char* t = tmp;

    tmp[0] = '\0'; // спочатку результат порожній

    int i = 0;
    while (i < len)
    {
        if (str[i] == 'B' && str[i + 1] == 'A' && str[i + 2] == 'S' && str[i + 3] == 'I' && str[i + 4] == 'C')
        {
            strcat(t, "Delphi"); // дописуємо delphi 
            t += 6; // перестрибуємо на 6 букв в новому рядку
            i += 5; // перестрибуємо на 5 букв в старому рядку
        }
        else
        {
            *t++ = str[i++]; // взяти str[i] зі старого рядка , вставити його в новий рядок на місце t , дальше зсунути i , t на 1 вперед
            *t = '\0'; // кінець рядка щоб strcat знайшов куди дописувати делфі
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
