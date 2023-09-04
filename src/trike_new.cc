#include <filesystem>
#include <fstream>
#include <iostream>

const char* default_main_src = R"main_src(
#include <iostream>

int main() {
  std::cout << "Hello from Trike!\n";
})main_src";

void trike_new(int argc_remaining, char* argv_remaining[], std::string project_name) {
  if (std::filesystem::exists(project_name)) {
    std::cout << "Error: File or directory already exists\n";
    return;
  }
  std::filesystem::path project_root = project_name;
  std::filesystem::create_directory(project_root);
  std::filesystem::create_directory(project_root / "src");
  std::ofstream main_file(project_root / "src" / "main.cc");
  main_file << default_main_src;
  
  std::ofstream trike_toml(project_root / "trike.toml");
  trike_toml << "[project]\n";
  trike_toml << "name = ";
  trike_toml << project_name << std::endl;
}
