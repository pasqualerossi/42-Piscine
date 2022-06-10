unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	gcd = 0;
	int	org_a = a;
	int	org_b = b;

	while (1)
	{
		if (a == 0)
			break;
		b %= a;
		if (b == 0)
			break;
		a %= b;
	}
	gcd = (!b) ? a : b;
	return (gcd ? (org_a / gcd * org_b) : 0);
}
