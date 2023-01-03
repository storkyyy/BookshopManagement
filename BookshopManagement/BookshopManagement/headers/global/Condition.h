#pragma once

/** 
* @brief ENUM for condition descriptions
*/
enum class Condition : unsigned char
{
	New = 0,
	LikeNew = 1,
	RegularUse = 2,
	Bad = 3,
	Replace = 4
};