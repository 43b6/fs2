//whip.c
#include <ansi.h>
#include <weapon.h>

inherit STABBER;

int special_att();

void create()
{
	set_name(HIG "�������" NOR,({"ten pen","pen"}));
	set_weight(1000);
	if( clonep() )
	 set_default_object(__FILE__);
	else 
	 {
	  set("unit", "֧");
	set("long","�������������ഫ��ʥ��ഫ����ǧ���������죬�޼᲻�ݡ�\n");
	  set("value", 10000);
	  set("material", "blacksteel");
          set("ski_level1", 35);
          set("ski_type1", "knowpen");
	 }
	init_stabber(80);
	setup();
}

