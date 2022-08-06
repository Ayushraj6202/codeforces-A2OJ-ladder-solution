#include <iostream> //A-Pashmak and Flowers CodeForces-459B Sort
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;
typedef long long ll;

ll v[200005];

int main()
{
  ll n, max, min, a, j, smax, smin, i;

  scanf("%lld", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%lld", &v[i]);
  }
  sort(v, v + n);

  min = v[0];
  smin = 1;
  for (i = 1; i < n && v[i] == min; i++)
    smin++;

  max = v[n - 1];
  smax = 1;
  for (i = n - 2; i >= 0 && v[i] == max; i--)
    smax++;

  if (max == min)
    printf("0 %lld\n", smax * (smax - 1) / 2);
  else
    printf("%lld %lld\n", max - min, smax * smin);
}