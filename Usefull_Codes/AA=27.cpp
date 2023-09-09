/*
https://codeforces.com/contest/1/problem/B
Number 26 that is marked by Z. Then there are two-letter numbers 27 has number AA, 28 — AB, number 52 is marked by AZ. After ZZ there follow three-letter numbers, etc.
*/


void num_to_string(int num) {
    if (num) {
        num_to_string((num - 1) / 26);
        str += ('A' + (num - 1) % 26);
    }
}

void string_to_num(string s) {
    for (int i = 0; i < s.size(); i++) num = num * 26 + s[i] - 'A' + 1;
}