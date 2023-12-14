#include <iostream>
#include <string>

using namespace std;

/**
    @file       Rozhin_Class_Person.h
    @brief      Заголовочный файл класса Персоны
    @copyright      ВоГУ
    @author     Рожин Д.И.
    @date       01-12-2023
    @version    1.0.0
    \par Использует классы:
            @ref Rozhin Class_Person
    \par Содержит класс:
            @ref Rozhin_Class_Person
*/



/// Класс описания пеерсоны
/** Содержит данные персоны и методы для работы с ними
*/

/**
 * @brief Класс, представляющий книгу.
 */
class Book {

private:
    string Author; /**< Автор книги. */
    string Title; /**< Название книги. */
    string Publisher; /**< Издательство книги. */
    int Year; /**< Год издания книги. */
    int PageCount; /**< Количество страниц книги. */

public:
    /// Конструктор по умолчанию
    /** Создает персону без инициализации полей
    */
    /**
     * @brief Конструктор класса Book.
     * @param author Автор книги.
     * @param title Название книги.
     * @param publisher Издательство книги.
     * @param year Год издания книги.
     * @param pageCount Количество страниц книги.
     */
    Book(string author, string title, string publisher, int year, int pageCount)
        : Author(author), Title(title), Publisher(publisher), Year(year), PageCount(pageCount) {}

    /**
     * @brief Получить фамилию "Рожин".
     * @return Фамилия "Рожин".
     */
    string getRozhinSurname() const {
        return "Рожин";
    }

    /**
     * @brief Получить автора книги.
     * @return Автор книги.
     */
    string getAuthor() const {
        return Author;
    }

    /**
     * @brief Получить название книги.
     * @return Название книги.
     */
    string getTitle() const {
        return Title;
    }

    /**
     * @brief Получить издательство книги.
     * @return Издательство книги.
     */
    string getPublisher() const {
        return Publisher;
    }
};

    /**
    * @brief Метод для получения года издания.
    * @return Год издания книги.
    */
    int getYear() const {
        return Year;
    }

    /**
     * @brief Метод для получения количества страниц.
     * @return Количество страниц книги.
     */
    int getPageCount() const {
        return PageCount;
    }

    /**
     * @brief Метод для показа списка книг нужного автора.
     * @param books Массив книг.
     * @param size Размер массива книг.
     * @param author Имя автора.
     */
    void showBooksByAuthor(const Book* books, int size, const string& author) const {
        cout << "Книги автора " << getRozhinSurname() << " " << author << ":\n";
        for (int i = 0; i < size; i++) {
            if (books[i].getAuthor() == author) {
                cout << books[i].getTitle() << " (" << books[i].getYear() << ")\n";
            }
        }
    }

        /**
     * @brief Метод для показа списка книг нужного издательства.
     * @param books Массив книг.
     * @param size Размер массива книг.
     * @param publisher Название издательства.
     */
    void showBooksByPublisher(const Book* books, int size, const std::string& publisher) const {
        cout << "Книги издательства " << publisher << ":\n";
        for (int i = 0; i < size; i++) {
            if (books[i].getPublisher() == publisher) {
                cout << books[i].getTitle() << " (" << books[i].getYear() << ")\n";
            }
        }
    }

        /**
     * @brief Метод для показа списка книг выпущенных после нужного года.
     * @param books Массив книг.
     * @param size Размер массива книг.
     * @param year Год.
     */
    void showBooksPublishedAfterYear(const Book* books, int size, int year) const {
        cout << "Книги, выпущенные после " << year << " года:\n";
        for (int i = 0; i < size; i++) {
            if (books[i].getYear() > year) {
                cout << books[i].getTitle() << " (" << books[i].getYear() << ")\n";
            }
        }
    }
};

    /**
     * @brief Точка входа в программу.
     * @return Код ошибки (0 - успешное выполнение).
     */
int main() {
    // Пример использования класса Book
    const int librarySize = 3;
    Book library[librarySize] = {
        Book("Иванов", "Книга 1", "Издательство A", 2000, 300),
        Book("Петров", "Книга 2", "Издательство B", 2010, 250),
        Book("Сидоров", "Книга 3", "Издательство A", 2020, 400),
    };

    Book rozhinBook("Рожин", "Книга Рожина", "Издательство C", 2022, 350);

    // Пример использования методов
    rozhinBook.showBooksByAuthor(library, librarySize, "Рожин");
    rozhinBook.showBooksByPublisher(library, librarySize, "Издательство A");
    rozhinBook.showBooksPublishedAfterYear(library, librarySize, 2015);

    return 0;
}