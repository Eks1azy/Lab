void main()
{
	int* pI;//��������� ����� 
	pI = new int;//���������� ���'��� � "���"
	*pI = 25;//�������� � ���� 
	delete pI;

	//��� �������� pI ������

	int* pW;//��������� ����� 
	pW = new int;//���������� ���'��� � "���"
	*pW = 10;//�������� � ����
	pW = pI;//pW = 25 pI = 25 ���������� ����� 
	delete pW;
}