
#include "Zombie.hpp"

#include <string>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *tmp = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		tmp[i].nameZombie(name);
	}
	return (tmp);
	// 한 번의 할당으로 n개를 만드는 방법?
}
