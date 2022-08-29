// Q. Count and Say

// https://leetcode.com/problems/count-and-say/

/*
class Solution
{
public:
       string say(string &a)
       {
              string current = "";
              for (int i = 0; i < a.size();)
              {
                     int j = i;
                     int count = 0;

                     while (a[i] == a[j])
                     {
                            count++;
                            j++;
                     }

                     current += (count + 48);
                     current += a[i];

                     i = j;
              }

              return current;
       }

       string countAndSay(int n)
       {
              string previous = "1";

              if (n == 1)
              {
                     return previous;
              }

              string current;
              for (int i = 2; i <= n; i++)
              {
                     current = say(previous);
                     previous = current;
              }

              return current;
       }
};
*/