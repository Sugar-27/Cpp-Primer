#include <iostream>

using namespace std;
int main()
{
    int cmd;
    string str1, str2;
    cout << "��������1/2ѡ���ܣ�1����ϴ��ַ�����2����ϳ��ַ���,����3�˳�" << endl;
    while (cin >> cmd)
    {
        if (cmd == 1)
        {
            getchar();
            getline(cin, str1);
            getline(cin, str2);
            if (str1 == str2)
                cout << "���" << endl;
            else if (str1 > str2)
                cout << str1 << endl;
            else
                cout << str2 << endl;
        }
        else if (cmd == 2)
        {
            getchar();
            string str1, str2;
            getline(cin, str1);
            getline(cin, str2);
            if (str1.size() == str2.size())
                cout << "���" << endl;
            else if (str1.size() > str2.size())
                cout << str1 << endl;
            else
                cout << str2 << endl;
        }
        else if (cmd == 3)
        {
            cout << "quit" << endl;
            break;
        }
        else
            cout << "error" << endl;
    }

    return 0;
}