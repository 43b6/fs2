// short_sword.c

#include <weapon.h>

inherit SWORD;

void create()
{
          set_name("���콣",({"et sword","sword"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
          set("value",30000);
		set("material", "iron");
		set("long",
         "����һ�������潣���ഫ�ǹ�����������ʱ����ġ�\n");
	}
           init_sword(75, SECONDARY);
	setup();
}
