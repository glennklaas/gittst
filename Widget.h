#include<string>

class Widget{
	private:
		std::string m_name;
	public:
		Widget();
		~Widget();
		std::string getName();
		void setName(const std::string newName);
};

