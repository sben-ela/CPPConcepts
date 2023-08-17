#include <iostream>
#include <map>

int main()
{
// Create a map of strings to integers
std::map<float, std::string> map;

// Insert some values into the map
map[5.40] = "sben-ela";
map[20] = "Age";
map[4000] = "City";
map[1337] = "School";

// Get an iterator pointing to the first element in the map
std::map<float, std::string>::iterator it = map.begin();

// Iterate through the map and print the elements
while (it != map.end())
{
	std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
	it++;
}

return 0;
}
