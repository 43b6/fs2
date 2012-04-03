// wizlock.c

inherit F_CLEAN_UP;

void create() { seteuid(getuid()); }
int main(object me, string arg)
{
  int lvl;

  if( me!=this_player(1) ) return 0;
  if( wiz_level(me) <= wiz_level("(arch)") )
    return notify_fail("�����ʦ�ȼ�̫�ͣ�û��ʹ�����ָ���Ȩ����\n");
  if( !arg || arg=="" ) {
    write ("wiz lock level at : "+read_file("/include/lock.h")+"\n");
    return 1;
  }

  if( sscanf(arg, "%d", lvl)!=1 ) lvl = wiz_level(arg);
  if (lvl > wiz_level (me)) lvl = wiz_level (me);
  if (write_file("/include/lock.h",sprintf("%d",lvl), 1)) {
    write ("ok, lock to wiz_level "+ lvl + "\n");
    return 1;
  } else
    return notify_fail("����Ȩ���趨ʧ�ܡ�\n");
}

int help (object me)
{
        write(@HELP
ָ���ʽ: wizlock <��ʦ�ȼ�>
 
����ĳ���ȼ����µ�ʹ���߽�����Ϸ��
������ʦ�ȼ��ֱ�Ϊ��
	0 : player
	1 : immortal
	2 : apprentice
	3 : wizard
	4 : arch
	5 : admin
	6 : guest
	7 : manager
��Ҫȡ������, ������ 0.
 
HELP
);
        return 1;
}
 
