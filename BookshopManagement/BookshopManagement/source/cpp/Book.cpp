#include "../../headers/Book.h"

/**
 * @brief Build a book, if a book of this author, title, condition combo exists ++copies
 * @param genre of book
 * @param subGenre: Unknown unless otherwise specified
 * @param author
 * @param condition: condition is New unless otherwise specificed
*/
Book::Book(const Author& author, const std::string& title, const Genre& genre, const SubGenre subGenre = SubGenre::Unknown, const Condition condition = Condition::New)
	: m_Author(author)
	, m_Title(title)
	, m_Genre(genre)
	, m_SubGenre(subGenre)
	, m_Condition(condition)
{}

/**
 * @brief Get Author for a specified book
 * @return m_Author
*/
Author Book::GetAuthor()
{
	return m_Author;
}

/**
 * @brief Get genres for a particular book
 * @return A string which is the base genre plus concat w/ subgenre where not Unknown
*/
const std::string Book::GetGenre()
{
	std::string Genre = "";

	if (m_Genre == Genre::Fiction)
	{
		Genre.append("Fiction, ");

		switch (m_SubGenre)
		{
			case(SubGenre::Drama):
				Genre.append("Drama");
				break;
			case(SubGenre::FairyTale):
				Genre.append("Fairy Tale");
				break;
			case(SubGenre::Fantasy):
				Genre.append("Fantasy");
				break;
			case(SubGenre::HistoricalFiction):
				Genre.append("Historical");
				break;
			case(SubGenre::Horror):
				Genre.append("Horror");
				break;
			case(SubGenre::Poetry):
				Genre.append("Poetry");
				break;
			case(SubGenre::ScienceFiction):
				Genre.append("Science");
				break;
			case(SubGenre::Mystery):
				Genre.append("Mystery");
				break;
			default:
				Genre.append("Sub-Genre Unknown");
		}
	}
	// Parent genre is non-fiction
	else
	{
		Genre.append("Non-Fiction, ");

		switch (m_SubGenre)
		{
			case(SubGenre::Biography):
				Genre.append("Biography");
				break;
			case(SubGenre::Autobiography):
				Genre.append("Autobiography");
				break;
			case(SubGenre::Speech):
				Genre.append("Speech");
				break;
			case(SubGenre::History):
				Genre.append("History");
				break;
			case(SubGenre::Science):
				Genre.append("Science");
				break;
			case(SubGenre::Cookbook):
				Genre.append("Cookbook");
				break;
			default:
				Genre.append("Sub-Genre Unknown");
		}
	}

	return Genre;
}

/**
 * @brief Set the condition of a book
 * @param book: pointer to the book being updated
*/
void Book::SetCondition()
{
	// Update condition of book with m_Id in database
}

/**
 * @brief Add the rating of a particular book, this will pull all ratings for this book
	then use the newly passed rating to calculate new overall rating and set rating for book
*/
void Book::AddRating(const int rating)
{
	// Add rating of book with m_Id in database
}

/**
 * @brief Set the number of copies for specificed book if book with author/title/condition exists, else direct user to create new book entry
 * @param copies: number of copies for book
*/
void Book::SetCopies(const int copies)
{
	// Look for book with a book with this author/title/condition and ++ copies else
	// print not found 
}

/**
 * @brief Check if book exists in db
 * @return true if exists, else false
*/
bool Book::BookExists()
{
	return false;
}

/**
 * @brief Creates book in the database
*/
void Book::CreateBook()
{
	// Insert this book into DB
}

/**
 * @brief Destructor
*/
Book::~Book()
{}