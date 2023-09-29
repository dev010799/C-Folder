#include <iostream>
#include <string>

using namespace std;

void make_a_pyramid(string text);

int main()
{
    string text;
    cout << "Hello\nEnter string that will be transformed into pyramid:\n";
    getline(cin,text);

    make_a_pyramid(text);

    return 0;
}

void make_a_pyramid(string text)
{
    int rows = text.size();
    int spaces = rows - 1;
    for(int i = 0; i < spaces;i++)
        cout << " ";
    spaces--;
    cout << text[0] << endl;

    for (int i = 1; i < rows; i++)
    {
        for(int space = 0; space < spaces;space++)
            cout << " ";
        spaces--;

        // printing first half of characters
        int row = i;
        for(int j = 0; j < row; j++)
            cout << text[j];

        // printing current middle character
        cout << text[row];
        // printing second half of characters
        for(int k = row - 1; k >= 0; k--)
            cout << text[k];

        cout << endl;
    }
}