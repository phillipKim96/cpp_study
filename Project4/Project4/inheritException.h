#include <stdio.h>
#include <iostream>


// ����� ���� ���� Ŭ���� ExNegative ����
class ExNegative
{
protected:
	int number; // ���� ��ü�� ������ ������ ��� ����

public:
	// �����ڷ� ������ �޾� �ʱ�ȭ�ϴ� ��� �̴ϼȶ����� ���
	ExNegative(int n) : number(n) { }

	// ���� �Լ� PrintError ����
	virtual void PrintError() {
		printf("%d�� �����̹Ƿ� �߸��� ���Դϴ�.\n", number);
	}
};

// ExNegative Ŭ������ ����ϴ� ExTooBig Ŭ���� ����
class ExTooBig : public ExNegative
{
public:
	// �����ڷ� ������ �޾� ExNegative Ŭ������ ������ ȣ���Ͽ� �ʱ�ȭ
	ExTooBig(int n) : ExNegative(n) { }

	// ���� �Լ� PrintError ������
	virtual void PrintError() {
		printf("%d�� �ʹ� Ů�ϴ�. 100���� �۾ƾ� �մϴ�.\n", number);
	}
};

// ExTooBig Ŭ������ ����ϴ� ExOdd Ŭ���� ����
class ExOdd : public ExTooBig
{
public:
	// �����ڷ� ������ �޾� ExTooBig Ŭ������ ������ ȣ���Ͽ� �ʱ�ȭ
	ExOdd(int n) : ExTooBig(n) { }

	// ���� �Լ� PrintError ������
	virtual void PrintError() {
		printf("%d�� Ȧ���Դϴ�. ¦������ �մϴ�.\n", number);
	}
};

// main �Լ�
int main()
{
	int n;

	for (;;) {
		try {
			printf("���ڸ� �Է��ϼ���(���� �� 0) : ");
			scanf_s("%d", &n);

			// �Էµ� ������ ���� ���ܸ� �߻���Ű�ų�, ����մϴ�.
			if (n == 0) break; // �Է��� 0�̸� �ݺ��� ����
			if (n < 0) throw ExNegative(n); // �����̸� ExNegative ���� �߻�
			if (n > 100) throw ExTooBig(n); // 100���� ũ�� ExTooBig ���� �߻�
			if (n % 2 != 0) throw ExOdd(n); // Ȧ���̸� ExOdd ���� �߻�

			printf("%d ���ڴ� ��Ģ�� �´� �����Դϴ�.\n", n);
		}
		catch (ExNegative& e) { // ExNegative ���ܸ� ��Ƽ� ó���մϴ�.
			e.PrintError(); // ���� ó���� ���� �ش� ��ü�� PrintError �Լ� ȣ��
		}
	}
}
