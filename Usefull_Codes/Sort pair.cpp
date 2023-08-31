#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i;
    pair <int, int> a[10];

    for(i = 0; i < 3; i++)
        cin >> a[i].second >> a[i].first;

    sort(a, a + 3);

    cout << endl;

    /* Here generally sorting takes place keying the first element but as we took input in reverse way so here sorting keys the second element.*/

    for(i = 0; i < 3; i++)
        cout << a[i].second << a[i].first << endl;

    cout << endl;

    /* In this case system got swapped. Thats why if input is 1 0 then output first = 0, second = 1 */

    cout << a[0].first << endl;
    cout << a[0].second << endl;

    int x = 1;

    // Result here is YES

    if(x == a[0].second)
        cout << "Yes" << endl;
    else
        cout <<"NO" << endl;



    return 0;
}
