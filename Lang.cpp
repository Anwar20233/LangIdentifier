#include <iostream>
#include <string>
#include "cld2/public/compact_lang_det.h"

int main() {
    std::string input;
    std::cout << "Enter text: ";
    std::getline(std::cin, input);

    bool is_plain_text = true;
    bool allow_extended_lang = false;
    bool include_details = false;
    int flags = 0;
    int bytes_found = 0;
    bool is_reliable = false;
    CLD2::Language language;
    int valid_prefix_bytes = 0;

    language = CLD2::DetectLanguage(
        input.c_str(),
        input.length(),
        is_plain_text
    );

    std::cout << "Detected Language: " << CLD2::LanguageName(language) << std::endl;
    return 0;
}
