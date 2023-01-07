#pragma once

/**
 * @brief ENUM for sub-genres
*/
enum class SubGenre : unsigned char
{
	// Fiction sub genres
	Drama = 0,
	FairyTale = 1,
	Fantasy = 2,
	HistoricalFiction = 3,
	Horror = 4,
	Poetry = 5,
	ScienceFiction = 6,
	Mystery = 7,

	// Non-fiction sub genres
	Biography = 8,
	Autobiography = 9,
	Speech = 10,
	History = 11,
	Science = 12,
	Cookbook = 13,

	Unknown = 99
};