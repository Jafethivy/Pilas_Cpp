#pragma once
#include <string>

class Url{
private:
	std::string url;
public:
	Url();

	std::string getUrl();

	void setUrl(std::string url_n);
};

