// select.c
//
// ѡ��Ҫ���İ���
// select		���Ѿ��趨�ˣ�����ʾ����
// select ����		��������
// select cat		ͬ list cat, �г����а���
// wade@Fantasy.Space 12/16/1999
// ���� BBS ϵͳ���÷�˵����� help BBS

#include <BBS.h>

int help();

int main(object me, string s)
{
  string	board;		// ���ڲ鿴�İ���
  object	BBS;
  mixed		boards;		// ��ʾ���а���

  if (!s || s == "") {	// ���Ѿ��趨�ˣ�����ʾ������������ʾһ��
    if (!stringp (board = me->query("post/board"))) {	// û�����
      write ("��Ǹ������û����κ��뿴�İ��棬�����ȶ�֮��\n");
      return 1;
    }
    write ("���趨�İ����ǣ�"+board + "\n");
    return 1;
  }
  if (undefinedp (boards = get_dir (BBS_DIR))) {	// ��Ŀ¼�����ˣ�
    write ("������� BBS Ŀ¼û��õĹ�ϵ��\n");
    return 1;
  }
  if (s == "cat") {	// �г����а��棬�ܼ������������Ŀ¼���ơ�
    printf ("Ŀǰ�İ����У�%O\n", boards);
    return 1;
  }
  if (member_array (s, boards) == -1) {	// ������������棡
    write ("Ŷ���Բ���Ŀǰû��������棬�����ѯ������ select cat ���\n");
    return 1;
  }
  // �ҵ��ˣ�����
  me->set ("post/board", s);	// ������ô�򵥣�
  write ("��ѡ�� "+s+" ���趨���ˡ�\n");

  return 1;
}

int help()
{
  write(@HELP
ָ���ʽ : select [cat|����]
���� :
	��Ϊ BBS ϵͳ�������У�
	ʹ���ߣ�list, select, post, read, renew
	�ס�ʦ��discard, mark, extract
ָ��˵����
	ѡ��Ҫ����һ�����档
	select		<-- �����趨��ӡ��Ŀǰ���趨��������ʾһ�¡�
	select cat	<-- �г����а���
	select ����	<-- һ����֪���˰ɣ�
HELP
    );
    return 1;
}
