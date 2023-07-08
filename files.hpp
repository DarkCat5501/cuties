#pragma once

#include <exception>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <iostream>

inline std::string read_file(const std::string& file_path) {
  std::fstream file;
	file.open(file_path, std::ios::in);
	std::stringstream buffer;
	if(file.is_open()) buffer << file.rdbuf();
  return buffer.str();
}
