// short_sword.c

#include <weapon.h>

inherit SWORD;

void create()
{
           set_name("��罣",({"hon sword","sword"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
          set("value",30000);
		set("material", "iron");
		set("long",
         "���ǵ���ܲٴ͸��ĺ����һ�ѱ�����\n");
	}
           init_sword(75, SECONDARY);
	setup();
}
