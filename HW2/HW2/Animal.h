#pragma once

class Animal
{
public:
	~Animal();

	virtual void makeSound() = 0;
};

class Dog : public Animal
{
public:
	void makeSound() override;
};

class Cat : public Animal
{
public:
	void makeSound() override;
};

class Cow : public Animal
{
public:
	void makeSound() override;
};

class Zoo {
private:
    Animal* animals[10];

public:
    ~Zoo();

    void addAnimal(Animal* animal);
    void performActions();
};