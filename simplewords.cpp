#include <iostream>
#include <string>
#include <algorithm>

std::string toLower(const std::string& str) {
    std::string lowerStr = str;
    std::transform(str.begin(), str.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

std::string detectLanguage(const std::string& text) {
    std::string lowerText = toLower(text);

    if (lowerText.find("hello") != std::string::npos || lowerText.find("the") != std::string::npos)
        return "English";
    else if (lowerText.find("مرحبا") != std::string::npos || lowerText.find("كيف") != std::string::npos)
        return "Arabic";
    else if (lowerText.find("bonjour") != std::string::npos || lowerText.find("merci") != std::string::npos)
        return "French";
    else if (lowerText.find("hola") != std::string::npos || lowerText.find("gracias") != std::string::npos)
        return "Spanish";
    else
        return "Unknown";
}

int main() {
    std::string input;
    std::cout << "Enter text: ";
    std::getline(std::cin, input);

    std::string language = detectLanguage(input);
    std::cout << "Detected Language: " << language << std::endl;

    return 0;
}
