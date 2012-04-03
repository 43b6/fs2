// discard.c
//
// ɾ������
// discard	ɾ����������ã��Ͱ�����ʾ help() �ɣ�
// discard N	ɾ���� N ��
// discard N-  ɾ���� N ���Ժ��
// discard -N	ɾ����ͷ���� N ��
// discard N-M	ɾ���� N �� M ��
// wade@Fantasy.Space 12/16/1999
// ���� BBS ϵͳ���÷�˵����� help BBS

#include <BBS.h>

int help();

int main(object me, string d)
{
  string	*token;		// �ִ����������� explode()
  string	board;		// ���ڴ���İ���
  object	BBS;
  int		N, M;

  if (!d || d == "") {	// �����ã�������ʾ help()
    return help ();
  }

  if (!objectp (BBS = find_object (BBS_OBJ))) {	// �Ҳ��� BBS
    write ("BBS ϵͳû������\n");
    return 1;
  }
  board = me->query ("post/board");
  token = explode (d, "-");	// ��֪������ʲôֵ������
  if (sizeof (token) == 2) {	// N-M ��ʽ
    sscanf (token[0], "%d", N);
    sscanf (token[1], "%d", M);
    write (BBS->discard (board, N, M));
  }
  else if (d[0..0] == "-") {	// -M ��ʽ
    sscanf (token[0], "%d", M);
    write (BBS->discard (board, 0, M));
  }
  else if (d[-1..-1] == "-") {	// N- ��ʽ
    sscanf (token[0], "%d", N);
    write (BBS->discard (board, N, BBS->nol (board)));
  }
  else {			// N ��ʽ
    sscanf (d, "%d", N);
    write (BBS->discard (board, N));
  }

  return 1;
}

int help()
{
  write(@HELP
ָ���ʽ : discard [[N][-][M]]
���� :
	��Ϊ BBS ϵͳ�������У�
	ʹ���ߣ�list, select, post, read, renew
	�ס�ʦ��discard, mark, extract
ָ��˵����
	ɾ�����档
	discard 	̫���ˣ�������ʾ ��ѶϢ��
	discard N	ɾ���� N ��
	discard N-	ɾ���� N ���Ժ��
	discard -M	ɾ����ͷ���� M ��
	discard N-M	ɾ���� N �� M ��
HELP
    );
    return 1;
}
