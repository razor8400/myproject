#pragma once

#include <nlohmann/json.hpp>

class Serializable
{
public:
	virtual nlohmann::json Serialize() const = 0;
};