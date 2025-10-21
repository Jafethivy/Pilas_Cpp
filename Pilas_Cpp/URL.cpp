#include "URL.h"
#include <string>

Url::Url() {}

std::string Url::getUrl() { return Url::url; }
void Url::setUrl(std::string url_n) { Url::url = url_n; }