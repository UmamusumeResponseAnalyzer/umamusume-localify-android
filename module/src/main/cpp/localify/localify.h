//
// Created by kimji on 2022-05-01.
//

#ifndef UMAMUSUMELOCALIFYANDROID_LOCALIFY_H
#define UMAMUSUMELOCALIFYANDROID_LOCALIFY_H

#include "../il2cpp/il2cpp_symbols.h"

namespace localify {
    std::wstring u16_wide(const std::u16string& str);
    std::string wide_u8(const std::wstring& wstr);
    void load_textdb(const std::vector<std::string> *dicts);
    void reload_textdb(const std::vector<std::string>* dicts);
    bool localify_text(size_t hash, std::string** result);
    Il2CppString* get_localized_string(size_t hash_or_id);
    Il2CppString* get_localized_string(Il2CppString* str);
    Il2CppString* get_localized_string(size_t hash_or_id, Il2CppString* str);
}

#endif //UMAMUSUMELOCALIFYANDROID_LOCALIFY_H
