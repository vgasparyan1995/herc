#pragma once

#include <string>
#include <unordered_map>

namespace herc {
namespace storage {

class Manager
{
public:
	void set(const std::string& key, const std::string& value);
	std::string get(const std::string& key) const;

private:
	std::unordered_map<std::string, std::string> m_rawStorage;
};

} // namespace storage
} // namespace herc
