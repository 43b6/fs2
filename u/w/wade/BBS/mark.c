// mark.c
//
// �������ʾ�ɲ�����ʾ
// mark		��ʾ���б���ʾ�Ĳ���
// mark N	��ʾ�� N ��
// mark N-	��ʾ�� N ���Ժ��
// mark -N	��ʾ��ͷ���� N ��
// mark N-M	��ʾ�� N �� M ��
// wade@Fantasy.Space 12/16/1999
// ���� BBS ϵͳ���÷�˵����� help BBS

#include <BBS.h>

int help();

int main(object me, string m)
{
  string	*token;		// �ִ����������� explode()
  string	board;		// ���ڴ���İ���
  object	BBS;
  int		N, M;

  if (!m || m == "") {	// �����ã�������ʾ help()
    return help ();
  }

  if (!objectp (BBS = find_object (BBS_OBJ))) {	// �Ҳ��� BBS
    write ("BBS ϵͳû��������֪ͨ��ʦ��\n");
    return 1;
  }
  board = me->query ("post/board");
  token = explode (d, "-");	// ��֪������ʲôֵ������
  if (sizeof (token) == 2) {	// N-M ��ʽ
    sscanf (token[0], "%d", N);
    sscanf (token[1], "%d", M);
    write (BBS->mark (board, N, M));
  }
  else if (d[0..0] == "-") {	// -M ��ʽ
    sscanf (token[0], "%d", M);
    write (BBS->mark (board, 0, M));
  }
  else if (d[-1..-1] == "-") {	// N- ��ʽ
    sscanf (token[0], "%d", N);
    write (BBS->mark (board, N, BBS->nol (board)));
  }
  else {			// N ��ʽ
    sscanf (d, "%d", N);
    write (BBS->mark (board, N));
  }

  return 1;
}

int help()
{
  write(@HELP
ָ���ʽ : mark [[N][-][M]]
���� :
	��Ϊ BBS ϵͳ�������У�
	ʹ���ߣ�list, select, post, read, renew
	�ס�ʦ��discard, mark, extract
ָ��˵����
	��ʾ���档
	mark		��ʾ���б� mark ס�Ĳ���
	mark N		�� N ��
	mark N-		��ʾ�� N ���Ժ��
	mark -M		��ʾ��ͷ���� M ��
	mark N-M	��ʾ�� N �� M ��
HELP
    );
    return 1;
}
