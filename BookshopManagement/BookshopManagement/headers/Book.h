#include <string>
#include "global/Genre.h"
#include "global/SubGenre.h"
#include "global/Condition.h"
#include "Author.h"
#include <mysql.h>
#include <sstream>

#pragma once
class Book
{

	public:
		/**
		 * @brief Build a book, if a book of this author, title, condition combo exists ++copies
		 * @param genre of book
		 * @param subGenre: Unknown unless otherwise specified 
		 * @param author 
		 * @param condition: condition is New unless otherwise specificed 
		*/
		Book(const Author &author, const std::string &title, const Genre &genre, const SubGenre subGenre = SubGenre::Unknown, const Condition condition = Condition::New);
		

		/**
		 * @brief Get Author for a specified book
		 * @return m_Author
		*/
		const Author GetAuthor();

		/**
		 * @brief Get genres for a particular book 
		 * @return A string which is the base genre plus concat w/ subgenre where not Unknown
		*/
		const std::string GetGenre();

		/**
		 * @brief Return avg rating of all ratings for book
		 * @return rating
		*/
		const double GetRating();

		/**
		 * @brief Set the condition of a book
		*/
		void SetCondition();

		/**
		 * @brief Set the number of copies for specificed book if book with author/title/condition exists, else direct user to create new book entry
		 * @param copies: number of copies for book
		*/
		void SetCopies(const int copies);

		/**
		 * @brief Set the rating of a particular book, this will pull all ratings for this book
			then use the newly passed rating to calculate new overall rating and set rating for book
		*/
		void AddRating(const int rating);

		/**
		 * @brief Check if book exists in db
		 * @return true if exists, else false 
		*/
		bool BookExists();

		/**
		 * @brief Creates book in the database
		*/
		void CreateBook();

		/**
		 * @brief Destructor
		*/
		~Book();

	private:
		Genre m_Genre;
		SubGenre m_SubGenre;
		Author m_Author;
		Condition m_Condition;
		std::string m_Title;
		int m_Rating;
		int m_Copies;
		int m_Id;

};