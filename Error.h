#pragma once
#include <stdexcept>

class Error : public std::domain_error
{
public:
	Error(std::string massage) : domain_error(massage) {
	}
};