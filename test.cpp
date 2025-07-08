#include "TConfig.hpp"

int main() {
	KEI::TConfigFile configFile("example.conf");
	KEI::TConfig config = configFile.getConfig("MULTICONFIG");
	std::cout << config.getConfig("config1").getValue<int32_t>("key1") << std::endl;
	std::cout << config.getConfig("config1").getValue<double>("key2") << std::endl;
	if ( configFile.getConfig("EXAMPLE").getValue<bool>("boolean") ) {
		std::cout << "Boolean value is true" << std::endl;
	} else {
		std::cout << "Boolean value is false" << std::endl;
	}
	std::cout << configFile.getConfig("EXAMPLE").getValue<std::string>("key4") << std::endl;
	// Further processing of the config file can be done here
	// ...
	return 0;
}