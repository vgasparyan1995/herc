#include "Manager.h"

void herc::storage::Manager::set(const std::string& key, const std::string& value)
{
	if (key.empty() || value.empty()) {
		return;
	}
	m_rawStorage[key] = value;
}

std::string herc::storage::Manager::get(const std::string& key) const
{
	if (key.empty()) {
		return std::string();
	}
	auto it = m_rawStorage.find(key);
	if (it == m_rawStorage.end()) {
		return std::string();
	}
	return it->second;
}
