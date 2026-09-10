#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <iomanip>
using namespace std;

int main()
{
    cout << "=== TYPING SPEED GAME ===\n";
    cout << "Type the sentence exactly, including punctuation.\n";
    cout << "Press Enter when you finish.\n\n";
    string playAgain = "y";

    while (playAgain == "y" || playAgain == "Y") 
    {
    vector<string> sentences = 
    {
    "The cat jumped over the fence.",
    "I like learning new things.",
    "The sun is shining today.",
    "My dog loves to play outside.",
    "She opened the door slowly.",
    "We walked home after school.",
    "The coffee is still too hot.",
    "He left his keys on the table.",
    "A small bird sat on the roof.",
    "Please turn off the lights.",
    "I forgot to bring my notebook.",
    "The bus arrived five minutes late.",
    "They watched a movie last night.",
    "My favorite season is autumn.",
    "Practice makes typing much easier."
    };

    random_device seed;
    mt19937 generator(seed());

    uniform_int_distribution<int> pick(0, sentences.size() - 1);

    string sentence = sentences[pick(generator)];
    cout << sentence << "\n";
    string answer;
    auto start = chrono::steady_clock::now();

    getline(cin, answer);

    auto end = chrono::steady_clock::now();

    chrono::duration<double> elapsed = end - start;

    cout << fixed << setprecision(2) << "Time: " << elapsed.count() << " seconds\n";

    if (answer == sentence) 
    {
    cout << "Correct!\n";

    double minutes = elapsed.count() / 60.0;
    double words = answer.length() / 5.0;
    double wpm = words / minutes;

    cout << "Speed: " << wpm << " WPM\n";
    } 
    else 
    {
    cout << "Not quite! Try again.\n";
    }      

    cout << "\nPlay again? (y/n): ";
    getline(cin, playAgain);
    }

    return 0;
}