#ifndef ABS(x)
#define ABS(x)
#endif
/**
 * main - entry point
 *
 * Return: nothing
 */
int main(void)
{
	#if ABS(x) < 0
	{
		ABS(x) = ABS(x) * -1;
	}
	#endif
}
