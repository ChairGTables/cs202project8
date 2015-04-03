#include <iostream>
#include <fstream>

using namespace std;

class card
{
        public:
                card();
                card(const card&);
                ~card();
                card& operator=(const card&);
                bool operator>(const card&) const;
		void setLocation(string);

                friend bool operator<(const card&, const card&);
                friend ostream& operator<<(ostream&, card&);
                friend ifstream& operator>>(ifstream&, card&);

        private:
                string suit;
                string rank;
		int value;
                string location;
};

class player
{
        public:
                player();
                ~player();
		void setCards(card* index);
		string getName();

                friend ostream& operator<<(ostream&, player&);
                friend ifstream& operator>>(ifstream&, player&);

        private:
                string name;
		card* hand;
		float bet;
};
