
#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("�˺d",({"ginseng"}) );
	set("base_weight", 50);
	set("unit","��");
	set("base_unit","��");
	set("value",1000);
	set_amount(1);
	set("long","
һ������ɽ�о�õ��˺d���˺d�������彡�����൱�İ������Ǹ߼��Ĳ�Ʒ
��������Ѱ�ò��ף���Եļ۸���ߣ�Ѱ���˼Ҳ������������ġ�\n");
	setup();
}
void init()
{
	if ( this_player()==environment() )
	add_action("do_eat","eat");
}
int do_eat(string str)
{
	object me=this_player();
	int num=10+random(5);
	if ( !str || str!="ginseng") {return 0;}
	message_vision("$N�����˺d�����þ���ָ��˲��١�\n",me);
	this_player()->receive_heal("gin",num);
	add_amount(-1);
	return 1;
}

