#include <iostream>
// base class
class YoutubeChannel
{
	private:
		std::string Name;
		std::string OwnerName;
		int SubscribeCount;
	
	public:
			YoutubeChannel(std::string name, std::string ownerName)
			{
				Name = name;
				OwnerName = ownerName;
				SubscribeCount = 0;
			}
			void GetInfo()
			{
				std::cout << "Name: " << Name << std::endl;
				std::cout << "OwnerName: " << OwnerName << std::endl;
				std::cout << "SubscriberCount: " << Name << std::endl;;
			}
			void Subscribe()
			{
				SubscribeCount++;
			}
			void unSubscribe()
			{
				if (SubscribeCount > 0)
				SubscribeCount--;
			}
};

// derived class
class CookingYoutubeChannel : public YoutubeChannel
{
	public:

};

int main()
{
	CookingYoutubeChannel YoutubeChannel;
}