#include <iostream>

using namespace std;

typedef struct
{
	char	mark;
	int		rank;
}card_t;

void	bzero_card(card_t *card)
{
	for(int i = 0; i < 52; i++)
	{
		card[i].mark = 0;
		card[i].rank = 0;
	}
}

int	main(void)
{
	card_t	card[52];
	char	m;
	int		r;
	int		n;
	size_t	i;

	i = 0;
	//SHCD 0~12 13~25 26~38 39~51 
	bzero_card(card);
	for (cin >> n; n > 0; n--)
	{
		cin >> m >> r;
		if(m == 'H')
			i = r + 12;
		else if(m == 'C')
			i = r + 25;
		else if(m == 'D')
			i = r + 38;
		else
			i = r - 1;
		card[i].mark = m;
		card[i].rank = r;
	}
	for (i = 0; i < 52; i++)
	{
		if(card[i].mark == 0 && card[i].rank == 0)
		{
			if (i < 13)
			{
				m = 'S';
				r = i + 1;
			}
			else if (i < 26)
			{
				m = 'H';
				r = i - 12;
			}
			else if (i < 39)
			{
				m = 'C';
				r = i - 25;
			}
			else
			{
				m = 'D';
				r = i - 38;
			}
			cout << m << " " << r << endl;
		}
	}
	return (0);
}