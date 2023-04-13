// Text Triangle

#include <iostream>
using namespace std;

int main() {

    long long num, spaces, asterisks = 1;
    string alignment, triangle_piece;

    cout << "Number: ";
    cin >> num;
    cout << "Alignment (L, C, R): ";
    cin >> alignment;
    cout << "Triangle Piece: ";
    cin >> triangle_piece;

    cout << endl << "Triangle: " << endl;

    if (alignment == "L") {

        for (int counter_1 = 1; counter_1 <= num; counter_1++) {
            for (int counter_2 = 1; counter_2 <= counter_1; counter_2++)
                cout << triangle_piece;
            cout << endl;
        }

    }

    else if (alignment == "C") {

		spaces = num - 1;

        if (num % 2 == 0) {
            cout << "\033[31mThe number was subtracted to 1, because it was even\033[0m" << endl << endl;
            num--;
        }

        for (int counter_1 = 1; counter_1 <= num / 2 + 1; counter_1++) {

            for (int counter_2 = 1; counter_2 <= spaces/2; counter_2++)
                cout << " ";
            for (int counter_2 = 1; counter_2 <= asterisks; counter_2++)
                cout << triangle_piece;
            for (int counter_2 = 1; counter_2 <= spaces/2; counter_2++)
                cout << " ";

            asterisks += 2;
            spaces -= 2;

            cout << endl;
        }

    }

    else if (alignment == "R") {

		spaces = num - 1;

        for (int counter_1 = 1; counter_1 <= num; counter_1++) {

            for (int counter_2 = 1; counter_2 <= spaces; counter_2++)
                cout << " ";
            for (int counter_2 = 1; counter_2 <= asterisks; counter_2++)
                cout << triangle_piece;

			asterisks++;
			spaces--;

            cout << endl;
        }

    }

        spaces = num - 1;

    return 0;

}