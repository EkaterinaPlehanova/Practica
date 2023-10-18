#include <iostream> 

using namespace std;

int N;
int currentLine = 0;
int MaxLine = 1;
bool grow = true;

int main()
{
    cin >> N;
    for (int num = 1; num < N + 1;)
    {
        if (currentLine < MaxLine && grow == true)
        {
            for (int i = 1; i < currentLine + 2; i++)
            {
                if (num < N + 1)
                {
                    cout << num << " ";
                    num += 1;

                }

            }
            currentLine += 1;
            cout << endl;
        }
        else if (currentLine > 0 && grow == false)
        {
            for (int i = 1; i < currentLine + 1; i++)
            {
                if (num < N + 1)
                {
                    cout << num << " ";
                    num += 1;

                }
            }
            currentLine -= 1;
            cout << endl;
        }
        else if (currentLine == MaxLine)
        {
            for (int i = 1; i < currentLine + 2; i++)
            {
                if (num < N + 1)
                {
                    cout << num << " ";
                    num += 1;

                }
            }
            grow = false;
            MaxLine += 1;
            cout << endl;
        }
        else if (currentLine == 0 && grow == false)
        {
            grow = true;
            currentLine = 1;

        }
    }
}
