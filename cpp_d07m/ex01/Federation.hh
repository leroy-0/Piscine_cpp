//
// Federation.hh for Project-Master in /home/tekm/tek1/cpp_d07m/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 10 10:14:07 2017 leroy_0
// Last update Tue Jan 10 10:14:07 2017 leroy_0
//

#ifndef __FEDERATION_HH_
#define __FEDERATION_HH_

#include "WarpSystem.hh"

namespace Federation
{
	class Ship
	{
		public:
			void 	setupCore(class WarpSystem::Core *);
			void	checkCore();

			Ship(int, int, std::string);
			~Ship();

		int 		_length;
		int 		_width;
		std::string _name;

		class WarpSystem::Core *_core;
	};

	namespace Starfleet
	{
		class Captain
		{
			public:
				std::string	getName();
				int			getAge();
				void		setAge(int);

				Captain(std::string);
				~Captain();
			
			std::string _name;
			int			_age;
		};

		class Ensign
		{
			public:
				Ensign(std::string);
				~Ensign();
			
			std::string _name;
		};

		class Ship
		{
			public:
				void 	setupCore(class WarpSystem::Core *);
				void	checkCore();
				void	promote(Captain *);


				Ship(int, int, std::string, short);
				~Ship();

			int			_length;
			int			_width;
			std::string	_name;
			short		_maxWarp;

			Captain		*_captain;

			class WarpSystem::Core *_core;
		};
	};
};

#endif 	/* __FEDERATION_HH_ */