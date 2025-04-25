#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
  string convert(string s, int numRows)
  {
    if (numRows == 1 || numRows >= s.length())
      return s;

    string result = "";
    int strSize = s.size();
    int boxCharCount = 2 * numRows - 2;
    for (int i = 0; i < numRows; i++)
    {
      int currIndex = i;
      int boxCount = 0;

      while (currIndex < strSize)
      {
        // Vertical character
        currIndex = (boxCharCount * boxCount) + i;
        if (currIndex >= strSize)
          break;
        result += s[currIndex];

        if (i != 0 && i != numRows - 1)
        {
          currIndex = (boxCharCount * (boxCount + 1)) - i;
          if (currIndex < strSize)
          {
            result += s[currIndex];
          }
        }
        boxCount++;
      }
    }
    return result;
  }
};

int main()
{
  string s1 = "PAYPALISHIRING";
  int numRows1 = 3;
  string output1 = "PAHNAPLSIIGYIR";
  Solution s;

  if (s.convert(s1, numRows1) == output1)
    cout << "First sting result is true: " << s.convert(s1, numRows1) << endl;

  cout << endl;
  string s2 = "PAYPALISHIRING";
  int numRows2 = 4;
  string output2 = "PINALSIGYAHRPI";

  cout << endl;

  if (s.convert(s2, numRows2) == output2)
    cout << "Second sting result is true: " << s.convert(s2, numRows2) << endl;

  return 0;
}