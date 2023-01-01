#include <iostream>

using namespace std;

int main()
{
    // book genres
    string genres[3] = {"Detectives", "Romance", "Fantasy"};

    // books sorted by genres
    // detective
    int id_detectives[5] = {0123, 1234, 3456, 5678, 7890};
    string detective_books[5] = {"Sleeping Murder", "DA VINCI CODE", "Still Life", "Devil in a Blue Dress", "In the Woods"};
    // romance
    int id_romance[5] = {4512, 4326, 5861, 4680, 5296};
    string romance_books[5] = {"The Love Hypothesis", "It Starts with Us", "It Ends with Us", "Outlander", "Love on the Brain"};
    // fantasy
    int id_fantasy[5] = {4964, 68273, 5829, 7264, 4829};
    string fantasy_books[5] = {"Game of thrones", "The lord of the rings", "Harry Potter", "Northern lights", "The way of kings"};

    string name, odp;
    cout << "Vitaj v kniznici, napis svoje meno: ";
    cin >> name;
    cout << "Prisiel si si knihu pozicat alebo vratit? Napis p pre pozicat, alebo v pre vratit ";
    cin >> odp;

    // introducing genres in library
    if (odp == "p")
    {
        cout << "V kniznici mame tieto zanre: ";
        for (int i = 0; i < 3; i++)
        {
            cout << genres[i] << " ";
        }
    }

    cout << endl;
    string book_genre;
    // asking which genre
    cout << "Ktory zaner knihy si chces pozicat? (detektivka, romantika, fantasy) ";
    cin >> book_genre;
    if (book_genre == "detektivka")
    {
        cout << "Tieto detektivky mame v kniznici:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << detective_books[i] << endl;
        }
    }
    else if (book_genre == "romantika")
    {
        cout << "Tieto romanticke knihy mame v kniznici:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << romance_books[i] << endl;
        }
    }
    else if (book_genre == "fantasy")
    {
        cout << "Tieto fantasy knihy mame v kniznici:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << fantasy_books[i] << endl;
        }
    }
    else
    {
        cout << "Tento zaner v kniznici bohuzial nemame";
        return 1;
    }

    cout << endl;
    string choice;
    cout << "Ktoru knihu si si vybral? ";
    cin >> choice;

    while (book_genre == "detektivka")
    {
        for (int i = 0; i < 5; i++)
        {
            if (choice == "Sleeping Murder")
            {
                cout << "Kniha " << choice << " je dostupna a ma ID: " << id_detectives[i];
            }
            else if (choice == "DA VINCI CODE")
            {
                cout << "Kniha " << choice << " je dostupna a ma ID " << id_detectives[i];
            }
        }
    }

    return 0;
}