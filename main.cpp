#include <iostream>

#include <Windows.h>

#include <magic.h>

typedef magic_t (*fn_magic_open_t)(int);

int main() {
    auto dll_path = R"(E:\projects\cpp\iie\file-rel-type\third-part\py-magic\bin\libmagic.dll)";
    auto proc_dll = ::LoadLibraryA(dll_path);
    if (proc_dll == nullptr) {
        std::cout << "Failed to load library from " << dll_path << std::endl;
        std::cout << "  with error code : " << ::GetLastError() << std::endl;
        return -1;
    }

    auto fn_magic_open = (fn_magic_open_t) ::GetProcAddress(proc_dll, "magic_open");
    if (fn_magic_open == nullptr) {
        std::cout << "Failed to load func `magic_open` from " << dll_path << std::endl;
    }
    return 0;
}
