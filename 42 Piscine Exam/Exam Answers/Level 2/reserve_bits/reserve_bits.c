unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res = 0;
	int i = 8;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
