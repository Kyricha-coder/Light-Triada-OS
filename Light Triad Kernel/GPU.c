void GPU() {
	volatile char* video = (volatile char*)0xB8000;
	video[0] = 'H';
	video[1] = 0x3F;
	video[2] = 'E';
	video[3] = 0x3F;
	video[4] = 'L';
	video[5] = 0x3F;
	video[6] = 'L';
	video[7] = 0x3F;
	video[8] = 'O';
	video[9] = 0x3F;
}
void kmain() {
	GPU();
}