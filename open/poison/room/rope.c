#include <ansi.h>
#include <weapon.h>

inherit WHIP;
void create()
{
	set_name("����",({"rope"}) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","
һ��������Ʒ���õ����ӣ���Ҳ������ǿ��������������ʹ�ã���������
��һ��������ô�---�����ϵ�(hang)��\n");
		set("material","iron");
		set("value",70);
		set("unit","��");
		set("wield_msg","$N������������������ϵ�������\n");
		set("unwield_msg","$N���������¡�\n");
	}
	init_whip(5);
	setup();
}
void init()
{
	add_action("do_hang","hang");
}
int do_hang(string str)
{
	object me=this_player();
	if( !str || str!="myself")
	return notify_fail("��ֻ�ܰ����Լ�(myself)�ϵ�!\n");
	{
	message_vision(
"$N�������һ���ط��������Ӱ�ã�������һ��׼����ɱ����ȴ��С�İ�
��ʯͷ����һ����������ð���ǣ�����$N����ɱ��������\n",this_player() );
	tell_object(me,"�����һ�������˵��ˡ�\n");
	me->add("kee", -5);
	return 1;
	}
}

	
