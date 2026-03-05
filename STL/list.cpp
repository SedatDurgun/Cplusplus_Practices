#include<iostream>
#include <list>

using namespace std;

void inserter(int newPlayerRating, list<int>& PlayersByRatings) {

	for (list<int>::iterator it = PlayersByRatings.begin(); it != PlayersByRatings.end(); it++) {
		if (*it > newPlayerRating) {
			PlayersByRatings.insert(it, newPlayerRating);
			return;
		}
	}
	PlayersByRatings.push_back(newPlayerRating);
	return;
}

void ratings(const list<int>& playerScores)
{
	for (list<int>::const_iterator it = playerScores.begin(); it != playerScores.end(); it++)
	{
		cout << "Player Scores:" << *it << endl;
	}

}
int main()
{
	list<int> allPlayers = { 3,8,2,9,1,6,4,7,5,10 };

	list<int> beginners;
	list<int> professionals;


	for (list<int>::iterator it = allPlayers.begin(); it != allPlayers.end(); it++)
	{
		int playerScore = *it;

		if (playerScore >= 1 && playerScore <= 5)
			inserter(playerScore, beginners);
		else if (playerScore >= 6 && playerScore <= 10)
			inserter(playerScore, professionals);
	}

	cout << "Beginners: " << endl;
	ratings(beginners);
	cout << "Professionals: " << endl;
	ratings(professionals);
}
