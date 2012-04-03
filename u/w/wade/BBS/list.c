// list.c
//
// �鿴���棬Ԥ����ϴο����Ŀ�ʼ��
// wade@Fantasy.Space 12/16/1999
// ���� BBS ϵͳ���÷�˵����� help()

#include <BBS.h>

int help();

int main(object me, string cat)
{
  object	BBS;
  string	title, 		// ��ʱ������
		auth, 		// ��ʱ������
		board,		// Ҫ�鿴�İ���
		msg;	// ����ӡ��ѶϢ
  int           i, 	// �� for �õ���ʱֵ
		t, 	// ������ʱ��ʱ��ֵ
		last_t,	// ��ʱ�ģ�������ϵ�ʱ���
		post_n,	// ��ʱ�ģ�������ϵĵڼ���
		nol,	// Number of Lists in board
		n; 	// �����ڵ�ʱ��㣬Ҫ��ǰ(��)������Ŀ

  // ȷ�� BBS ���
  if (!objectp (BBS = find_object (BBS_OBJ))) {
    BBS = new (BBS_OBJ);
  }
  if (!BBS) {
    write ("BBS ��������ڣ���֪ͨ��ʦ��\n");
    return 1;
  }
  if (cat == "cat") {	// �г����а��棬��Ȼ���Ժ�ǰ��ĺϲ��ж�
    printf ("Ŀǰ�İ����У�%O\n", BBS->query_cat());
    return 1;
  }
  // ��δʹ�� select �趨����һ������
  if (undefinedp (board = me->query("post/board"))) {
    printf ("��ʹ�� select �����趨����һ���������ʹ�ñ����\n");
    return 1;
  }
  if (!BBS->if_has_board (board)) {
    write ("��ѡ�İ���������� select ��ѡ��һ�Ρ�\n");
    return 1;
  }
  if (!cat) {	// û������
    n = 0;
  }
  // �﷨���󣬱���Ҳ������ɴ����ڵĿ�ʼ��
  else if (sscanf (cat, "%d", n) != 1) {
    return help();
  }

  // û�����������(Ҳ�����°�)
  if (undefinedp (last_t = me->query ("post/"+board))) {
    me->set("post/"+board, 0);
  }

  // �趨 ���� �ڼ������棬Ϊ�˰�ȫ�����ÿ��һ�� list ����һ��
  if (post_n = BBS->query_order (board, last_t) < 0) {	// Ӧ���Ѿ�û������
    write ("û�κβ��棡\n");
    return 1;
  }
  me->set_temp (board, post_n);

  nol = BBS->nol (board);
  n = post_n + n;
  if (n < 0) n = 0;
  if (n > nol) n = nol;

  msg = BBS->query_lists (board, n);
  printf ("%s\nȫ���� %d �⣬�ϴο����� %d �⡣\n",
	msg, nol, post_n);

  return 1;
}

int help()
{
  write(@HELP
ָ���ʽ : list [cat | [[+|-]����N]
BBS ˵�� :
	��Ϊ BBS ϵͳ�������У�
	ʹ���ߣ�list, select, post, read, renew
	�ס�ʦ��discard, mark, extract
ָ��˵����
	�鿴���档
	list		<-- ��δʹ�� select ѡ����һ�����棬��ͬ list cat
	list cat	<-- �г����а���
	list N		<-- ������������� N �����ۺ��г�����ʮ������
	list -N		<-- �������ǰ���� N �����ۺ��г�����ʮ������
HELP
    );
    return 1;
}
