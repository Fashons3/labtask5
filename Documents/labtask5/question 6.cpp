#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>
#include <vector>

using namespace std;

int countVowels(const string& data);
void Reverse(const string& data);
int countWords(const string& data);
void Capitalize(string& data);

int main() {
    ifstream inputStream;
    string fileData;

    inputStream.open("text_file.txt");

    if (inputStream.is_open()) {
        getline(inputStream, fileData);

        cout << "Number of vowels: " << countVowels(fileData) << "\n";

        cout << "Number of words: " << countWords(fileData) << "\n";

        Reverse(fileData);

        Capitalize(fileData);

        inputStream.close();
    } else {
        cout << "Failed to open file \n";
    }
    return 0;
}

void Reverse(const string& filedata) {
    stringstream ss(filedata);
    vector<string> words;
    string token;
    string finalStr = "";

    while (ss >> token) {
        words.push_back(token);
    }

    for (int i = words.size() - 1; i > -1; i--) {
        finalStr = finalStr + words[i] + " ";
    }

    cout << "Reverse word by word: \n";
    cout << finalStr << "\n";
}

int countWords(const string& data) {
    stringstream ss(data);
    int count = 0;
    string token;

    while (ss >> token) {
        count++;
    }
    return count;
}

int countVowels(const string& data) {
    int numOfvowels = 0;
    string vowels = "aeiou";
    for (char a : data) {
        if (vowels.find(tolower(a)) != string::npos) {
            numOfvowels++;
        }
    }
    return numOfvowels;
}

void Capitalize(string& filedata) {
    for (size_t i = 0; i < filedata.size(); i++) {
        if (i == 0 || !isalpha(filedata[i - 1])) {
            filedata[i] = toupper(filedata[i]);
        } else {
            filedata[i] = tolower(filedata[i]);
        }
    }
    cout << "Capitalized sentence: \n";
    cout << filedata << "\n";
}
