inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIB "�ܺ�" NOR,({"letter"}));
	set("unit","��");
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
����д�ţ�

��ɱ�������޺�������ʬ�������Ҷĳ�����س꣡

				Ҷ��ɱ
LONG);
	return 1;
}
