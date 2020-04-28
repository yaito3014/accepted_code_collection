#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define endl "\n"

class EllysCandies
{
public:
  string getWinner(vector<int> boxes)
  {
    if (boxes.size() % 2 == 0)
      return "Kris";
    else
      return "Elly";
  }

  // BEGIN CUT HERE
public:
  void run_test(int Case)
  {
    if ((Case == -1) || (Case == 0))
      test_case_0();
    if ((Case == -1) || (Case == 1))
      test_case_1();
    if ((Case == -1) || (Case == 2))
      test_case_2();
    if ((Case == -1) || (Case == 3))
      test_case_3();
  }

private:
  template <typename T>
  string print_array(const vector<T> &V)
  {
    ostringstream os;
    os << "{ ";
    for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter)
      os << '\"' << *iter << "\",";
    os << " }";
    return os.str();
  }
  void verify_case(int Case, const string &Expected, const string &Received)
  {
    cerr << "Test Case #" << Case << "...";
    if (Expected == Received)
      cerr << "PASSED" << endl;
    else
    {
      cerr << "FAILED" << endl;
      cerr << "\tExpected: \"" << Expected << '\"' << endl;
      cerr << "\tReceived: \"" << Received << '\"' << endl;
    }
  }
  void test_case_0()
  {
    int Arr0[] = {4, 2};
    vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
    string Arg1 = "Kris";
    verify_case(0, Arg1, getWinner(Arg0));
  }
  void test_case_1()
  {
    int Arr0[] = {1, 1, 1000};
    vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
    string Arg1 = "Elly";
    verify_case(1, Arg1, getWinner(Arg0));
  }
  void test_case_2()
  {
    int Arr0[] = {42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
    string Arg1 = "Kris";
    verify_case(2, Arg1, getWinner(Arg0));
  }
  void test_case_3()
  {
    int Arr0[] = {42, 13, 17, 666, 55, 100, 3, 20, 81, 42, 123};
    vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
    string Arg1 = "Elly";
    verify_case(3, Arg1, getWinner(Arg0));
  }

  // END CUT HERE
};

// BEGIN CUT HERE
int main()
{
  EllysCandies ___test;
  ___test.run_test(-1);
  return 0;
}
// END CUT HERE
