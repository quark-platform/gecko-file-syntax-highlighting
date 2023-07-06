#define TEST 1

int main()
{
#if defined(TEST) && defined(ABC)
  int a = 1;
#else
  int a = 2;
#endif

  return TEST;
}