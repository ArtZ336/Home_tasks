#include <iostream>
#include <string>

using namespace std;

struct Book
{
    string title;
    string author;
    string publishing;
    string genre;
    static int const SIZE = 10;

    Book()
    {
            cout << "Введите название книги: ";
            cin >> title;
            cout << "Введите автора книги: ";
            cin >> author;
            cout << "Введите издательство книги: ";
            cin >> publishing;
            cout << "Введите жанр книги: ";
            cin >> genre;
    }


    void Print(Book arrBooks)
    {
            cout.width(7);
            cout << " Название\t|" << " Автор\t\t|" << " Издательство\t|" << " Жанр\t\t|" << endl;
            for (int i = 0; i < 73; i++)
            {
                cout << "-";
            }
            cout << endl;

        cout.width(5);
        cout << arrBooks.title << "\t\t| ";
        cout << arrBooks.author << "\t\t| ";
        cout << arrBooks.publishing << "\t\t| ";
        cout << arrBooks.genre << "\t\t|" << endl;
        cout << endl;
    }


    void EditBook(Book& book)
    {
        cout << "Введите название книги: "; 
        cin >> title;
        book.title = title;
        cout << "Введите атора книги: "; 
        cin >> author;
        book.author = author;
        cout << "Введите издательство книги: "; 
        cin >> publishing; 
        book.publishing = publishing;
        cout << "Введите жанр книги: "; 
        cin >> genre; 
        book.genre = genre;
    }

   
    void SearchForABookByAutor(Book books[], string autor)
    {
        bool flag = true;

        cout << "Книги с указанным автором:" << endl << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (books[i].author == autor)
            {
                if (i > 0 && i < 2)
                {
                    cout.width(7);
                    cout << " Название\t|" << " Автор\t\t|" << " Издательство\t|" << " Жанр\t\t|" << endl;
                    for (int i = 0; i < 73; i++)
                    {
                        cout << "-";
                    }
                    cout << endl;
                }

                Print(books[i]);
                flag = false;
            }
        }

        if (flag)
        {
            cout << "Книги с указанным автором нет в базе." << endl;
        }

    }   
    void SearchForABookByTitle(Book books[], string title)
    {
        bool flag = true;

        cout << "Книги с указанным названием:" << endl << endl;

        cout.width(7);
        cout <<  " Название\t|" << " Автор\t\t|" << " Издательство\t|" << " Жанр\t\t|" << endl;
        for (int i = 0; i < 73; i++)
        {
            cout << "-";
        }
        cout << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (books[i].title == title)
            {
                Print(books[i]);
                flag = false;
            }
        }

        if (flag)
        {
            cout << "Книги с указанным названием нет в базе." << endl;
        }
    }

    void SortingArrayTitle(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].title > books[j + 1].title)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

    }

    void SortingArrayAutor(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].author > books[j + 1].author)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

    }

    void SortingArrayPublishing(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].publishing > books[j + 1].publishing)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }
    }
};

int main()
{
    Book arrBooks[Book::SIZE];
    Book books;
    srand(time(0));

    bool yesNo = true;
    int numMenu = 0;
    int temp;
    string tempStr;

    do
    {
        cout << "\t\tМЕНЮ" << endl;
        cout << "\t1. Печать всех книг; " << endl;
        cout << "\t2. Редактировать книгу; " << endl;
        cout << "\t3. Поиск книг по автору; " << endl;
        cout << "\t4. Поиск книги по названию;" << endl;
        cout << "\t5. Сортировка массива по названию книг;" << endl;
        cout << "\t6. Сортировка массива по автору;" << endl;
        cout << "\t7. Сортировка массива по издательству;" << endl;
        cout << "\t8. Выход." << endl; cout << endl;

        cout << "\tВведите номер меню: "; cin >> numMenu; cout << endl;

        if (numMenu == 1)
        {
            for (Book number : arrBooks)
            {
                books.Print(number);
            }

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 2)
        {
            cout << "Книги в базе: " << endl;
            for (Book number : arrBooks)
            {
                books.Print(number);
            }
            cout << endl;

            cout << "Введите номер id книги для изменения: "; cin >> temp;

            if (temp > 0 || temp <= 10)
            {
                books.EditBook(arrBooks[temp - 1]);
            }
            else
            {
                cout << "Книги с таким Id нет в базе." << endl;
            }

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 3)
        {
            cout << "Введите автора: "; cin >> tempStr;

            books.SearchForABookByAutor(arrBooks, tempStr);

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 4)
        {
            cout << "Введите название: "; cin >> tempStr;

            books.SearchForABookByTitle(arrBooks, tempStr);

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 5)
        {
            books.SortingArrayTitle(arrBooks);

            for (Book number : arrBooks)
            {
                books.Print(number);
            }

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 6)
        {
            books.SortingArrayAutor(arrBooks);

            for (Book number : arrBooks)
            {
                books.Print(number);
            }

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 7)
        {
            books.SortingArrayPublishing(arrBooks);

            for (Book number : arrBooks)
            {
                books.Print(number);
            }

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 8)
        {
            yesNo = false;
        }
    } while (yesNo);

    cout << endl << endl;
    system("pause>null");
}
