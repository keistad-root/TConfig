#include "TConfig.hpp"

int main() {
	kei::TConfigFile configFile("example.conf");
	kei::TConfig config = configFile.getConfig("MULTICONFIG");
	std::cout << config.getConfig("config1").getValue<double>("key2") << std::endl;
	std::cout << "???" << std::endl;
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