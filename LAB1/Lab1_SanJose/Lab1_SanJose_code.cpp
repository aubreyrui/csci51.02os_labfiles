/*
	Mary June Aubrey C. San Jose (225629)
	January 23, 2024

	I have not discussed the C++ language code in my program 
	with anyone other than my instructor or the teaching assistants 
	assigned to this course.

	I have not used C++ language code obtained from another student, 
	or any other unauthorized source, either modified or unmodified.

	If any C++ language code or documentation used in my program 
	was obtained from another source, such as a textbook or website, 
	that has been clearly noted with a proper citation in the comments 
	of my program.
*/

#include <iostream>
#include <cctype>
using namespace std;

string replaceChar(string str) {
    for (int i = 0; i<str.length(); i++) {
        str[i+1] = '#';
    }
    return str;
}

string moveAlpha(string str) {
    for (int i = 0; i<str.length(); i++) {
        char b = str[i];
        if (isalpha(b) == 1){
            if (b == 'z') {
                b = 'a';
            }
            else if (b == 'Z')
            {
                b = 'A';
            }
            
            else {
                b++;
            }
        }
            str[i] = b;
    }

    return str;
}


void moveAlphaPoint(char* str) {
    char p;
    p = *str;
    if (isalpha(p) == 1){
            if (p == 'z') {
                p = 'a';
            }
            else if (p == 'Z')
            {
                p = 'A';
            }
            
            else {
                p++;
            }
        }
    *str = p;
}

int main(void) {
    std::string name;
    cin >> name;
    cout << name << "\n";
    cout << replaceChar(name) << endl;
    cout << moveAlpha(name) << endl;

    for( int i =  0; i < name.length(); i++  ) // for strings
        {
            moveAlphaPoint(&name[i]);
        }
    cout  << name  << endl;
    return 0;
}
