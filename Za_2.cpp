#ifndef Za_2
#define Za_2

#include <iostream>

class Fruit
{
private:
	std::string m_name;
	std::string m_color;
public:
	void setName(std::string name)
	{
		m_name = name;
	}

	void setColor(std::string color)
	{
		m_color = color;
	}

	const std::string& getName() const
	{
		return m_name;
	}

	const std::string& getColor() const
	{
		return m_color;
	}
};

class Apple : public Fruit
{
public:
	Apple(std::string color = "")
	{
		if (color == "")
			color = "green";

		setName("apple");
		setColor(color);
	}
};

class Banana : public Fruit
{
public:
	Banana(std::string color = "")
	{
		if (color == "")

			color = "yellow";

		setName("banana");
		setColor(color);
	}
};

class GrannySmith : public Apple
{
public:
	GrannySmith()
	{
		setName("Granny Smith " + Apple::getName());
	}
};

#endif