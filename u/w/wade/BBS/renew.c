// renew.c
//
// ���貼��ָ�꣬ѡ���У�
// renew	��ǰ��
// renew $	�����
// renew #	���� #
// wade@Fantasy.Space 12/16/1999
// ���� BBS ϵͳ���÷�˵����� help()

#include <BBS.h>

int help();

int main(object me, string r)
{
  string	board;		// ���ڲ鿴�İ���
  object	BBS;
  mixed		lists;		// ��ʾĳ�����µ����в���
  int		n;		// ��������λ�ã����������֣��Ƚ�����
				// ���ԣ���Լ��һ��Ҫ�ù� list ����ɣ�

  if (undefinedp (board = me->query ("post/board"))) {	// ���ڲ鿴�İ���
    write ("������ select ����ѡ����Ҫ�İ������ñ����\n");
    return 1;
  }
  if (!r || r == "") {	// ֱ��������ǰ��
    me->set ("post/"+board, 0);		// ֱ����Ϊ 0, ��֤����ǰ��
    return 1;
  }
  if (r == "$") {	// ֱ�����������
    me->set ("post/"+board, time());	// ֱ����Ϊ���ڵ�ʱ�䣬��֤�������
    return 1;
  }
  if (sscanf (r, "%d", n) == 1) {	// �Ǹ�����
    if (n < 0) {			// �﷨���ϣ�Ҫ��������
      write ("����������������\n");
      return 1;
    }
    if (undefinedp (BBS = find_object (BBS_OBJ))) {	// �Ҳ��� BBS ���
      write ("BBS ϵͳ�������ˣ���֪ͨ��ʦ��\n");
      return 1;
    }
    // lists �� BBS �����ĳ board �е����в���
    // lists[][0] == time
    // lists[][1] == author
    // lists[][2] == mark
    // lists[][3] == title
    if (undefinedp (lists = BBS->query (board))) {
      write ("���ˣ����ܻ�û���κι��棬��Ȼ���ǻ��ˣ�\n");
      return 1;
    }
    if (n >= sizeof (lists)-1) {	// ���ֲ��ԣ�̫���ˣ�
      write ("û����ô��⣬����������һ�⡣\n");
      me->set ("post/"+board, time());	// ֱ����Ϊ���ڵ�ʱ�䣬��֤�������
      return 1;
    }
      
    // ���ڲ��������ˡ�������趨������λ�á�
    me->set ("post/"+board, lists[n][0]);	// �������Ӷ��ѣ��򵥰ɣ�
  }
  else
    write ("�����������ֵ������ɣ�\n");
  return 1;
}

int help()
{
  write(@HELP
ָ���ʽ : renew [$|#]
BBS ˵�� :
	��Ϊ BBS ϵͳ�������У�
	ʹ���ߣ�list, select, post, read, renew
	�ס�ʦ��discard, mark, extract
ָ��˵����
	����ָ�꣬Ҳ�����´�Ԥ�����һ�����濪ʼ��
	renew		������ǰ��
	renew $		���������
	renre #		������ # ��
HELP
    );
    return 1;
}
