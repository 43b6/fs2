// read.c
//
// �Դ浵�ķ�ʽ����ʵ��
// �󲿷ݹ��ܶ����� /player/BBS.c �С�
// wade@Fantasy.Space 12/16/1999
#include <BBS.h>

int help();

int main(object me, string r)
{
  object	BBS;
  string	board;
  int		n;	// ��Ҫ�鿴�� n ��

  if (!r) return help();
  if (!stringp (board = me->query ("post/board"))) {
    write ("���� select ѡ���뿴�İ��棬���ñ�������棡\n");
    return 1;
  }
  if (!objectp (BBS = find_object (BBS_OBJ))) {
    write ("BBS ϵͳ��û��������֪ͨ��ʦ�鿴��\n");
    return 1;
  }
  sscanf (r, "%d", n);
  if (n<0 || n>=BBS->nol(board)) {
    write ("��Χ���ԣ����� list ����鿴֮���ٶ����棡\n");
    return 1;
  }
  me->set("post/"+board, BBS->query_time (board, n));
  return BBS->read_list (board, n);
}

int help()
{
  write(@HELP
ָ���ʽ : read #
ָ��˵�� :
	�������� # �Ⲽ�棬��ο� list, post, discard �����
HELP
    );
    return 1;
}
