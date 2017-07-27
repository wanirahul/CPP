
#include <tuple>
#include <algorithm>
#include <functional>
#include <thread>
#include <vector>

using namespace std;
using namespace std::placeholders;

template <class T>
void swap1(T& x, T& y)
{
  auto result = std::make_tuple(x, y);
  y = get<0>(result);
  x = get<1>(result);
}

bool divisible(int num, int den)
{
  if (num % den == 0)
    return true;
  return false;

}

int approach_1()
{
  int arr[10] = { 1,20,13,4,5,6,10,28,19,15 };
  int count = 0;
  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    if (divisible(arr[i], 5))
      count++;
  }
  return count;

}

int approach_2()
{
  int arr[10] = { 1,20,13,4,5,6,10,28,19,15 };
  return std::count_if(arr, arr + sizeof(arr) / sizeof(int), std::bind(&divisible, _1, 5));
}

void thread_function()
{

}

int solution(vector<int> &H)
{
  int result = 0;

  return result;
}

int main()
{
  vector<int> H = { 4, 6, 2, 1, 5 };
  
  solution(H);

  int x = 10;
  int y = 20;

  swap1<int>(x, y);

  string s = "rahul";
  string f = "wani";

  swap1<string>(s, f);

  approach_1();

  approach_2();

  thread thread_obj(thread_function);
  return 0;
}
