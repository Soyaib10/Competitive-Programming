// for real number
for (int i = 0; i < 100; i++) {
	double mid = (l + r) / 2;
	if (ok(mid)) l = mid;
	else r = mid;
}
cout << l << nl;

////// for general perpose////////


// minimum value
int lo = 0, hi = n, re = -1;

while (lo <= hi) {
	int mid = (lo + hi) / 2;

	if (ok(mid)) {
		re = mid;
		hi = mid - 1;
	}
	else lo = mid + 1;
}

// max value
int lo = 0, hi = n, re = -1;

while (lo <= hi) {
	int mid = (lo + hi) / 2;

	if (ok(mid)) {
		re = mid;
		lo = mid + 1;
	}
	else hi = mid - 1;
}