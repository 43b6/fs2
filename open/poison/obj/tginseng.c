
#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("ǧ���˺d",({"thousand ginseng","ginseng"}) );
	set("base_weight", 50);
	set("unit","��");
	set("base_unit","��");
	set("value",10000);
	set_amount(1);
	set("long","
ǧ���˺d���˺d�еļ�Ʒ������ɽ�����ǧ��������ǧ����������������Ч
�Ͻ���ͨ�˺d���� , ��Եģ���۸���Ǹߵ����ˡ�\n");
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
	int num=100+random(10);
	if ( !str || str!="ginseng") {return 0;}
	message_vision("$N��ǧ���˺d���£����þ����ƺ�ȫ�ָ��ˡ�\n",me);
	this_player()->receive_heal("gin",num);
	add_amount(-1);
	return 1;
}

