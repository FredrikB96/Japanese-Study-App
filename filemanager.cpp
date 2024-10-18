#include <string>
#include <filesystem>
#include <string>
namespace fs = std::filesystem;

class FileManager{

public:
static std::string Initialize()
{

    return GetModules();
}

static bool SaveFile(std::string filename,  std::string *msg)
{
    return 0;
}

static bool LoadFile(std::string filename,  std::string *msg)
{
    return 0;
}

private:
static std::string GetModules()
{
    std::string Modules = "";
    std::string path = "C:/Users/blomg/Documents/QT/Testing_Projects/Japanese_Study/Modules";
    for (const auto & entry : fs::directory_iterator(path))
    {
        Modules.append(std::string(entry.path().generic_string()+"\n ").replace(0,entry.path().generic_string().find_last_of("/")+1,""));

    }


    return Modules;
}

};
