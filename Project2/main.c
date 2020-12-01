#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Bin(int deci, char* result) {
	//int deci => char * result(binary string)
	//result�� �������κ��� ���� --> ��ȯ����,,

	result[8] = '\0'; //������ ��Ҵ� null�� �ʱ�ȭ 
	for (int i = 7; i >= 0; i--) {
		//���� ù���� LSB�̰�, LSB�� result[7]�� ������ �Ŵ�. 
		result[i] = (deci % 2) + '0';//'0'�� ���ؼ� ���ڷ� ������ش�. ���� 0�ƴϸ� 1��
		deci = deci / 2;
	}

}

//register print function
int Regi(char* regi) {
	//5bit
	if (!strncmp(regi, "00000", 5))
		return 0;
	else if (!strncmp(regi, "00001", 5))
		return 1;
	else if (!strncmp(regi, "00010", 5))
		return 2;
	else if (!strncmp(regi, "00011", 5))
		return 3;
	else if (!strncmp(regi, "00100", 5))
		return 4;
	else if (!strncmp(regi, "00101", 5))
		return 5;
	else if (!strncmp(regi, "00110", 5))
		return 6;
	else if (!strncmp(regi, "00111", 5))
		return 7;
	else if (!strncmp(regi, "01000", 5))
		return 8;
	else if (!strncmp(regi, "01001", 5))
		return 9;
	else if (!strncmp(regi, "01010", 5))
		return 10;
	else if (!strncmp(regi, "01011", 5))
		return 11;
	else if (!strncmp(regi, "01100", 5))//12
		return 12;
	else if (!strncmp(regi, "01101", 5))//13
		return 13;
	else if (!strncmp(regi, "01110", 5))//14
		return 14;
	else if (!strncmp(regi, "01111", 5))//15
		return 15;
	else if (!strncmp(regi, "10000", 5))//16
		return 16;
	else if (!strncmp(regi, "10001", 5))//17
		return 17;
	else if (!strncmp(regi, "10010", 5))//18
		return 18;
	else if (!strncmp(regi, "10011", 5))//19
		return 19;
	else if (!strncmp(regi, "10100", 5))//20
		return 20;
	else if (!strncmp(regi, "10101", 5))//21
		return 21;
	else if (!strncmp(regi, "10110", 5))//22
		return 22;
	else if (!strncmp(regi, "10111", 5))//23
		return 23;
	else if (!strncmp(regi, "11000", 5))//24
		return 24;
	else if (!strncmp(regi, "11001", 5))//25
		return 25;
	else if (!strncmp(regi, "11010", 5))//26
		return 26;
	else if (!strncmp(regi, "11011", 5))//27
		return 27;
	else if (!strncmp(regi, "11100", 5))//28
		return 28;
	else if (!strncmp(regi, "11101", 5))//29
		return 29;
	else if (!strncmp(regi, "11110", 5))//30
		return 30;
	else if (!strncmp(regi, "11111", 5))//31
		return 31;
}
//�ش��ϴ� register �ε����� ��ȯ

void Shift(char* regi) {
	//5bit

	if (!strncmp(regi, "00000", 5))
		printf("0");
	else if (!strncmp(regi, "00001", 5))
		printf("1");
	else if (!strncmp(regi, "00010", 5))
		printf("2");
	else if (!strncmp(regi, "00011", 5))
		printf("3");
	else if (!strncmp(regi, "00100", 5))
		printf("4");
	else if (!strncmp(regi, "00101", 5))
		printf("5");
	else if (!strncmp(regi, "00110", 5))
		printf("6");
	else if (!strncmp(regi, "00111", 5))
		printf("7");
	else if (!strncmp(regi, "01000", 5))
		printf("8");
	else if (!strncmp(regi, "01001", 5))
		printf("9");
	else if (!strncmp(regi, "01010", 5))
		printf("10");
	else if (!strncmp(regi, "01011", 5))
		printf("11");//11
	else if (!strncmp(regi, "01100", 5))//12
		printf("12");
	else if (!strncmp(regi, "01101", 5))//13
		printf("13");
	else if (!strncmp(regi, "01110", 5))//14
		printf("14");
	else if (!strncmp(regi, "01111", 5))//15
		printf("15");
	else if (!strncmp(regi, "10000", 5))//16
		printf("16");
	else if (!strncmp(regi, "10001", 5))//17
		printf("17");
	else if (!strncmp(regi, "10010", 5))//18
		printf("18");
	else if (!strncmp(regi, "10011", 5))//19
		printf("19");
	else if (!strncmp(regi, "10100", 5))//20
		printf("20");
	else if (!strncmp(regi, "10101", 5))//21
		printf("21");
	else if (!strncmp(regi, "10110", 5))//22
		printf("22");
	else if (!strncmp(regi, "10111", 5))//23
		printf("23");
	else if (!strncmp(regi, "11000", 5))//24
		printf("24");
	else if (!strncmp(regi, "11001", 5))//25
		printf("25");
	else if (!strncmp(regi, "11010", 5))//26
		printf("26");
	else if (!strncmp(regi, "11011", 5))//27
		printf("27");
	else if (!strncmp(regi, "11100", 5))//28
		printf("28");
	else if (!strncmp(regi, "11101", 5))//29
		printf("29");
	else if (!strncmp(regi, "11110", 5))//30
		printf("30");
	else if (!strncmp(regi, "11111", 5))//31
		printf("31");
}

int bintoDeci(char* bin, int flag) {
	//������ 16bit ��� Ȱ���� ���� ����� �Ŵ� ��?
	//flag is for check if it is signed or unsigned
	//nooooo --> we also have to convert target 
	//if imm = imm[0]"00001101"imm[7]  ==13(10)
	int sum = 0;
	if (flag == 1 || flag == 0) {
		//signed
		if (bin[0] == '0') {
			//positive number
			for (int i = 0; i < 16; i++) {

				if (bin[i] == '1')
					sum += pow(2, 15 - i);
			}
		}
		else if (bin[0] == '1') {
			//negative number
			sum = -pow(2, 16 - 1);
			for (int i = 1; i < 16; i++) {
				if (bin[i] == '1')
					sum += pow(2, 15 - i);
			}
		}
	}
	else if (flag == -1) {
		//26 bit immediate
		//printf("jal immediate: %s\n", bin);
		for (int i = 0; i < 26; i++) {
			if (bin[i] == '1')
				sum += pow(2, 25 - i);
		}
	}
	//else if (flag == 0) {
	//	//unsigned
	//	for (int i = 0; i < 16; i++) {
	//		if (bin[i] == '1')
	//			sum += pow(2, 15 - i);
	//	}
	//}


	return sum;
}

int printMid(char* middle, int* Reg, int* DMem, char* last) {
	//32bit�� ���� �ִ� ���ڿ��� ������ �� 
	//-> 32bit¥�� binary code�� �϶�� ��� �غ���
	//�ϴ� ���� inst mem = last �迭, data memory = DMem, register file = Reg
	//Common
	char forOp[6];
	char rs[5], rt[5], rd[5], shamt[5], target[26];
	int rsi, rti, rdi, shi, immi, tari;
	//what is opcode
	for (int op = 0; op < 6; op++)
		forOp[op] = middle[op];

	//opcode = "000000" =>R-type : funct�� Ȯ��
	//�������� �� Ȯ��: �ٸ� �Լ�(Regi)�� ����.
	//shamt �� Ȯ��: �ٸ� �Լ�(Shift)�� ����.

	char forFunct[6];//For R-type
	char Imm[16]; //For I-type

	if (!strncmp(forOp, "000000", 6))
	{//R-type ->  op rs rt rd shamt funct
		for (int func = 0; func < 6; func++)//funct Ȯ��
			forFunct[func] = middle[func + 26];

		for (rsi = 0; rsi < 5; rsi++)//rs Ȯ��
			rs[rsi] = middle[rsi + 6];

		for (rti = 0; rti < 5; rti++)//rt Ȯ��
			rt[rti] = middle[rti + 11];

		for (rdi = 0; rdi < 5; rdi++)//rd Ȯ��
			rd[rdi] = middle[rdi + 16];

		for (shi = 0; shi < 5; shi++)//rd Ȯ��
			shamt[shi] = middle[shi + 21];
		//shamt�� ���� ���� 0~31
		//shamt�� $�Ⱥ��� --> Shift �Լ��� �־ ����ϱ�

		if (!strncmp(forFunct, "100000", 6)) {
			Reg[Regi(rd)] = Reg[Regi(rs)] + Reg[Regi(rt)];
			Reg[32] += 4;
			return 1;
			//add
		}
		else if (!strncmp(forFunct, "100100", 6)) {
			Reg[Regi(rd)] = Reg[Regi(rs)] & Reg[Regi(rt)];
			Reg[32] += 4;
			return 1;
			//and
		}
		else if (!strncmp(forFunct, "100101", 6)) {
			Reg[Regi(rd)] = Reg[Regi(rs)] | Reg[Regi(rt)];
			Reg[32] += 4;
			return 1;
			//or
		}
		else if (!strncmp(forFunct, "101010", 6)) {
			if (Reg[Regi(rs)] < Reg[Regi(rt)])
				Reg[Regi(rd)] = 1;
			else
				Reg[Regi(rd)] = 0;
			Reg[32] += 4;
			return 1;
			//slt
		}
		else if (!strncmp(forFunct, "100010", 6)) {
			Reg[Regi(rd)] = Reg[Regi(rs)] - Reg[Regi(rt)];
			Reg[32] += 4;
			return 1;
			//sub
		}
		else if (!strncmp(forFunct, "000000", 6)) {
			//printf("sll -> nop ");
			if (!(strncmp(rd, "00000", 5)) && !strncmp(rs, "00000", 5) && !strncmp(rt, "00000", 5) && !strncmp(shamt, "00000", 5)) {
				Reg[32] += 4;
				return 1;
			}
			//sll -> nop
		}
		else {
			printf("unknown instruction\n");
			Reg[32] += 4;
			return -1;
		}
	}
	else {
		//For I-type
		for (rsi = 0; rsi < 5; rsi++)//rs Ȯ��
			rs[rsi] = middle[rsi + 6];

		for (rti = 0; rti < 5; rti++)//rt Ȯ��
			rt[rti] = middle[rti + 11];

		for (immi = 0; immi < 16; immi++)//immediate Ȯ��
			Imm[immi] = middle[immi + 16];

		//For J and JAL
		for (tari = 0; tari < 26; tari++) //immediate == 26bit
			target[tari] = middle[tari + 6];


		if (!strncmp(forOp, "001000", 6)) {
			Reg[Regi(rt)] = Reg[Regi(rs)] + bintoDeci(Imm, 1);
			Reg[32] += 4;
			return 1;

			//addi
		}
		else if (!strncmp(forOp, "001100", 6)) {
			Reg[Regi(rt)] = Reg[Regi(rs)] & (0x0000FFFF & bintoDeci(Imm, 1));
			Reg[32] += 4;
			return 1;

			//andi
		}
		else if (!strncmp(forOp, "000100", 6)) {
			if (Reg[Regi(rs)] == Reg[Regi(rt)])
				Reg[32] = Reg[32] + 4 + (4 * bintoDeci(Imm, 1));
			else
				Reg[32] += 4;

			return 1;

			//beq, offset
		}
		else if (!strncmp(forOp, "000101", 6)) {
			if (Reg[Regi(rs)] != Reg[Regi(rt)])
				Reg[32] = Reg[32] + 4 + (4 * bintoDeci(Imm, 1));
			else
				Reg[32] += 4;

			return 1;

			//bne
		}
		else if (!strncmp(forOp, "001111", 6)) {
			Reg[Regi(rt)] = (bintoDeci(Imm, 1) << 16);
			Reg[32] += 4;
			return 1;

			//lui
		}
		else if (!strncmp(forOp, "100011", 6)) {
			/*printf("i am lw\n");
			printf("%x\n", DMem[((Reg[Regi(rs)]+bintoDeci(Imm,1))-0x10000000)/4]);
			printf("%x\n", bintoDeci(Imm, 1));*/
			Reg[Regi(rt)] = DMem[((Reg[Regi(rs)] + bintoDeci(Imm, 1)) - 0x10000000) / 4];
			Reg[32] += 4;
			return 1;

			//DMem�� ������ �迭(4 byte ����)�̱� ������ 0x4�� �ּҰ��� ���� �޸��� ������(1 byte ����)�� ��� �ʹٸ�, DMem[0x1]�� �����ؾ��Ѵ�. 
			//lw
			//lw $2, 1073741824($10)
		}
		else if (!strncmp(forOp, "001101", 6)) {
			Reg[Regi(rt)] = Reg[Regi(rs)] | (0x0000FFFF & bintoDeci(Imm, 1));
			Reg[32] += 4;
			return 1;

			//ori
		}
		else if (!strncmp(forOp, "101011", 6)) {
			/*printf("i am sw\n");
			printf("%x\n", Reg[Regi(rt)]);
			printf("%x\n",Reg[Regi(rs)]-0x10000000);
			printf("%x\n",bintoDeci(Imm,1))*/;
			DMem[(Reg[Regi(rs)] + bintoDeci(Imm, 1) - 0x10000000) / 4] = Reg[Regi(rt)];
			Reg[32] += 4;
			return 1;

			//sw
		}
		else if (!strncmp(forOp, "001010", 6)) {
			if (Reg[Regi(rs)] < bintoDeci(Imm, 1))
				Reg[Regi(rt)] = 1;
			else
				Reg[Regi(rt)] = 0;
			Reg[32] += 4;
			return 1;

			//slti
		}
		else if (!strncmp(forOp, "000010", 6)) {
			Reg[32] = (0x0FFFFFFF & (bintoDeci(target, -1) << 2)) | ((Reg[32] + 4) & 0xF0000000);

			return 1;

			//j
		}
		else {
			printf("unknown instruction\n");
			Reg[32] += 4;
			return -1;
		}
	}
}


int main(int argc, char* argv[]) {

	/*argv
	0:x ,
	1:bin ���� �̸�,
	2:������ ���ɾ� ����
	3:��� ������� (reg or mem)
	4:mem�϶� �����ּ�
	5:mem�϶� ���� �޸� ����(4 byte ����)
	*/
	int ins_number = 1;
	int memstart = 1;
	int memnum = 1;
	char mr[4];
	if (argc < 4) { //bin ���� �̸�, instruction ���������� ���� ���
		ins_number = atoi(argv[2]);
	}
	else if (argc == 4 && (!strncmp(argv[3], "reg", 3))) { //?, bin, inst num, reg
		ins_number = atoi(argv[2]);
	}
	else if (argc == 6 && (!strncmp(argv[3], "mem", 3))) {//?, bin, inst num, mem, memstart, mem num
		ins_number = atoi(argv[2]);
		memstart = strtol(argv[4], NULL, 16);
		memnum = atoi(argv[5]);
	}
	else
		return 0;


	// last ���ڿ��迭�� ũ�⸦ Ȯ���ϱ� ���ؼ� ! �����Ҵ� ���Ͽ� !


	//printf("inst ����, mem���� reg����, �޸� ���� ����, �޸� ���� �Է� : ");
	//scanf("%d %s %x %d", &ins_number, mr, &memstart, &memnum);
	//scanf("%d %s", &ins_number, mr);
	unsigned char preBuf[1];
	FILE* pre;
	pre = fopen(argv[1], "rb");
	if (pre == NULL) {
		printf("Error opening input file.\n");
		exit(1);
	}


	int loop = 0;
	while (!feof(pre)) {
		loop++;
		fread(preBuf, sizeof(char), 1, pre); //8bit�� ���� 
		//loop*8 =�������� ����
	}
	loop = loop * 9;
	char* last = (char*)malloc(sizeof(char) * loop);
	//printf("size of last : %d\n",loop);
	memset(last, 0xFF, loop);
	//last ���ڿ� ��� 0xFF�� ���� �ʱ�ȭ �Ϸ� 
	//-> ���ڷ� �䱸�� �� ���� �� ���� ���� ���ɾ �����ϸ� unknown instruction�� ���̴� ���α׷� �����ϱ� 
	/*for(int in=0;in<loop;in++)
		printf("num : %d : %0x\n",in, last[in]);*/
	fclose(pre);


	//���� ���� ���� �б�
	unsigned char buf[1]; //char������ �޾ƿ´�. --> fread ù �Ű������� �����ͷ� ��� �ؼ�,, �̷��� �ؾߤ�����
	FILE* ptr;
	int idx = 0;
	char res[4];
	char result[9];//result -> char������ buf�� �޾ƿ� file ������
	ptr = fopen(argv[1], "rb");  // r for read, b for binary
	if (ptr == NULL) {
		printf("Error opening input file.\n");
		exit(1);
	}

	//16����(2 digits) -> 10���� ����('0'~"255") -> 10���� ����(0~255) -> 2���� ���ڿ�(0000 0000 ~ 1111 1111)
	while (!feof(ptr)) {
		fread(buf, sizeof(char), 1, ptr); // 1 byte �� �о�� 
		sprintf(res, "%d", buf[0]);
		//char buf = 8 bit�� 10������ ������ ���ڿ��� �����Ѵ�. 2�� 8���� 256 �ִ� 3�ڸ��� -> res�� ũ�Ⱑ 4�� ���� �迭
		int deci = atoi(res);
		//10�������� ������ ���ڸ� ǥ���ϴ� ���ڿ��� ������ ���ڷ� �ٲپ int integer�� ����

		Bin(deci, result);
		/*
		���� deci(8bit ������ ���� ���̹Ƿ�, 2������ �ٲپ 8bit�� ǥ�� ����)�� 2�������� ��ȯ
		result ���ڿ��� 9���� ��Ҹ� ����, result[8]�� 9��° ��Ҵ� null�� �ʱ�ȭ
		Bin�� ����� result���� 8bit¥�� 2������ ����Ǿ� �ְ� �ȴ�.
		MSB�� result[0]�� ����Ǿ�����.
		*/
		for (int b = 0; b < 8; b++) {
			//2������ �ٲ� buf �������� ����غ���
			//�������� ���� �迭�� ����, idx ������ ���� �� main�� ����, �ʱ�ȭ 
			//2���� 8bit¥�� ���ڿ��� last ���ڿ��迭�� �ָ��� ����
			//last ���ڿ����� bin����
			last[idx] = result[b];
			idx++;
		}
	}
	last[idx] = '\0';
	fclose(ptr);
	/*
	������� bin���Ͽ��� ������ ���������� ��ȯ
	*/


	//register �迭, data memory �迭, instruction memory�� last �迭 �״�� ����ϱ� 
	int Reg[33]; //register
	Reg[32] = 0; //Reg[32] : pc register, instruction �ּ� 0���� ����
	int* DMem = (int*)malloc(sizeof(int) * 262145); //16^5 bytes = 1,048,576 -> 1,048,576/4 = 262,144 + 1(����)
	memset(Reg, 0, sizeof(Reg));//0���� �ʱ�ȭ Ȯ�� �Ϸ�
	memset(DMem, 0xFF, 1048580);//0xFF�� �ʱ�ȭ Ȯ�� �Ϸ�
	/*for(int in=0;in<262145;in++)
		printf("num : %d : %0x\n",in, DMem[in]);*/
	char middle[33];
	//middle�� 2���� ���ڿ� ������ 32 bit�� 0 or 1 �ϳ��� char �ϳ��� �����ϴ� ��
	middle[32] = '\0';
	int pc;//last�� ������ 
	for (int out = 0; out < ins_number/*number�� input���� ���� ���� Ƚ��*/;) {
		pc = Reg[32] * 8;
		//���� Reg[32]�� 4�� ����Ǿ������� �ι�° ���ɾ ������� �Ҹ� = last[32]�� �о�� ��
		for (int in = 0; in < 32; in++) { //32bit�� �о middle�� ������. (middle = ���ɾ� �� ��)
			//printf("out[%d] : %d\n", out,in);
			middle[in] = last[pc]; //last�� bit������ ��ü ���ɾ ����Ǿ� �ְ�, pc register�� byte ������ ����Ǿ� ���� 
			pc++;
			//middle�� instruction �ϳ��� ����Ǿ� ���� 
			//in�� middle�� �ε��� 
			//���� Reg[32]�� 4�� ����Ǿ������� �ι�° ���ɾ ������� �Ҹ� = last[32]�� �о�� ��
		}
		//printf("middle[%d] : %s\n", out,middle);
		//Reg[31] += 4;
		//--> middle, last�� ���� �ڵ� �� �а� �ִ� �� Ȯ�� 
		out++;//�д� instruction ����
		int check = printMid(middle, Reg, DMem, last); //���پ� ���� �Լ��� ����ؼ� ���, ���ɾ ���缭 Reg[32]�� pc ������Ű�� 
		if (check == 1)
			continue;
		else if (check == -1)
			break;
	}
	free(last);
	//printf("%d %s %x %d\n", ins_number, mr, memstart, memnum);


	if (!strncmp(argv[3], "mem", 3)) {
		memstart -= 0x10000000;
		for (int mem = memstart; mem < memnum; mem++) {

			printf("0x%08x\n", DMem[mem]);
		}
	}
	else if (!strncmp(argv[3], "reg", 3)) {
		for (int regg = 0; regg < 33; regg++) {
			if (regg == 32)
				printf("PC: 0x%08x\n", Reg[regg]);
			else
				printf("$%d: 0x%08x\n", regg, Reg[regg]);
		}
	}
	return 0;
}


/*
1. �μ� ���� �ޱ�
- ���ɾ� ���� --> number������ �����ؼ� out<number �� �ݺ��� �����ϱ�
2. Reg�� 0���� �ʱ�ȭ, last�� 0xFF�� �ʱ�ȭ, DMem�� 0xFF�� �ʱ�ȭ �Ϸ�
3. Reg[31]�� pc register * 8�� last�迭�� ������
		- Reg[31]�� ����Ǿ��ִ� 1�� �޸� �ּ� => 1 = 4byte
		- last[idx]�� ����Ǿ��ִ� 1�� 1bit

		so, ���� Reg[31]�� 0x4�� ����Ǿ������� �ι�° ���ɾ ������� �Ҹ� = last[32]���� 32 bit�� �о�� ��

4. printMid �����ϱ�
	- register ����
	- memory�� store, load
	- j, beq, bne jump�� ��, pc+4�� �����ΰ� �����ϱ�

5. reg, mem ��� �Լ� �����ϱ�


*/