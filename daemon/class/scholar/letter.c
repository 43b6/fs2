inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIR "��ս��" NOR,({"letter"}));
	set("unit","��");
	set("no_drop",1);
	set("no_give",1);
	set("no_get",1);
	set("value",1);
        setup();
}
void init() 
{
	add_action("do_read","read");
}
int do_read( string arg )
{
	if( !arg || arg != "letter" ) return 0;
	write(@LONG
��ս��д�ţ�

ʥ����С�����е���ѩ��ɽ�����һ��������

			��Ӱ����  ѩ��
LONG);
	return 1;
}
