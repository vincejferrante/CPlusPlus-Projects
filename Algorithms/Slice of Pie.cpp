//Create a function that determines whether or not it's possible to split a pie fairly given these three parameters:

bool equalSlices(int total, int people, int each) {
	return people * each <= total;
}
