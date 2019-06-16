#include <boost/regex.hpp>
#include <iostream>
#include <string>


using namespace std;


int main() {
    boost::regex pattern{"^this.(\\w+).*$"};

    std::string line = "this is some text";
    
    boost::smatch matches;

    if (boost::regex_match(line, matches, pattern)) {
        std::cout << "-------------" << endl;
        for (std::string match: matches)
            std::cout << matches[0] << endl;
    }
    else
        std::cout << "Couldn't find regex matches!" << endl;

    return 0;
}
