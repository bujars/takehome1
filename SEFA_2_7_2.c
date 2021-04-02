void g_main() {

	static int save[9] = { 10, 10, 10, 10, 10, 10, 3, 2, 1};
	static int i = 0;
	static int k = 0;

	while (save[i] == k) {
		i += 1;
	}

}