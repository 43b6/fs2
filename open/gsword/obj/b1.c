// ������д���ɹ���so �˽�ԭ���Ľ����ع�ȡ��

#include <weapon.h>
#include <ansi.h>
inherit SWORD;

void create()
{
	set_name("���⽣",({"old sword","sword"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("no_drop",1);
		set("long","һ�������Զ���⽣��\n");
	/*	set("value",1000);	*/
		set("material", "gold");
		set("no_sell",1);
		set("no_give",1);
		set("no_auc",1);
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
              set_heart_beat(1);
	}
	init_sword(10);
	setup();
}

