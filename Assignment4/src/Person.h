/*
 * Person.h
 *
 *  Created on: Nov 20, 2017
 *      Author: Betcher
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <string>
#include <iostream>

class Person
{
	private:
		std::string firstName;
		std::string lastName;
		std::string phone;
	public:
		Person();
		Person(std::string firstName, std::string lastName);
		Person(std::string firstName, std::string lastName, std::string phone);
		Person(Person name, std::string phone);
		std::string getFirstName();
		std::string getLastName();
		std::string getPhone();
		bool hasPhone();
		friend std::ostream& operator<<(std::ostream& output, Person& person);
		friend bool operator ==(Person& firstPerson, Person& secondPerson);
		friend bool operator !=(Person& firstPerson, Person& secondPerson);
		friend bool operator >(Person& firstPerson, Person& secondPerson);
		friend bool operator <(Person& firstPerson, Person& secondPerson);
		virtual ~Person();
};

#endif /* PERSON_H_ */
