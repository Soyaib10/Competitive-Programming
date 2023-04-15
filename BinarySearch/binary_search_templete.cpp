// for real number
for (int i = 0; i < 100; i++) {
    double mid = (lo + hi) / 2;
    if (ok(mid)) lo = mid;
    else hi = mid;
}
cout << lo << "\n";

////// for general perpose////////
// minimum value
ll lo = 0, hi = n, re = -1;
while (lo <= hi) {
    ll mid = (lo + hi) / 2;
    if (ok(mid)) {
        re = mid;
        hi = mid - 1;
    }
    else lo = mid + 1;
}

// max value
ll lo = 0, hi = n, re = -1;
while (lo <= hi) {
    ll mid = (lo + hi) / 2;
    if (ok(mid)) {
        re = mid;
        lo = mid + 1;
    }
    else hi = mid - 1;
}
