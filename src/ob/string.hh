#ifndef OB_STRING_HH
#define OB_STRING_HH

#include <cstddef>

#include <string>
#include <optional>
#include <regex>

namespace OB::String
{

std::string lowercase(std::string const& str);

std::string trim(std::string str);

std::optional<std::vector<std::string>> match(std::string const& str, std::regex rx);

std::string repeat(std::string const& str, std::size_t num);

bool starts_with(std::string const& str, std::string const& val);

std::size_t damerau_levenshtein(std::string const& lhs, std::string const& rhs,
  std::size_t const weight_insert = 1, std::size_t const weight_substitute = 1,
  std::size_t const weight_delete = 1, std::size_t const weight_transpose = 1);

} // namespace OB::String

#endif // OB_STRING_HH
