int main(int argc, char* argv[])
{
    if ((argc == 2) && (strcmp(argv[1], "-v") == 0)) {
		log_fatal("Server Version: LoginServer/%s\n", VERSION);
		printf("Server Version: LoginServer/%s\n", VERSION);
		log_fatal("Server Build: %s %s\n", __DATE__, __TIME__);
		printf("Server Build: %s %s\n", __DATE__, __TIME__);
		return 0;
	}
}