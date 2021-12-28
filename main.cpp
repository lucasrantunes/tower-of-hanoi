#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    cout << "Choose one option:" << endl;
    cout << "1) Start Game" << endl;
    cout << "2) Ranking" << endl;
    cout << "3) Exit" << endl;

    int userInput = 0;
    do
    {
        cin >> userInput;
        switch (userInput)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            return 0;
            break;
        default:
            cout << "Insert a valid option." << endl;
            break;
        }
    } while (userInput > 3 || userInput < 1);
    return 0;
}