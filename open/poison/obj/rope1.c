
#include <ansi.h>
#include <weapon.h>
inherit WHIP;

void create()
{
	set_name("�߲�������",({"rainbow rope","rope"}) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit","��");
		set("value",1000);
		set("material","crimsonsteel");
		set("wield_msg","$N���������һ�����߲�������������ɫ��ͬ�Ĺ�â�������ܡ�\n");
		set("unwield_msg","$N�����������£���ɫ��â����֮��ʧ��\n");
		set("long","
һ����ɢ������ɫ��ͬ��â����������\n");
		}
	init_whip(50);
	setup();
}
