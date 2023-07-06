#define TEST 1

int main()
{
#if defined(TEST)
  int a = 1;
#else
  int a = 2;
#endif

  return TEST;
}