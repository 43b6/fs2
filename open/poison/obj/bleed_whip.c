// bleed_whip.c
#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name(HIR "Ѫ����" NOR,({"bleed whip","whip"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
          set("value",30000);
		set("material","iron");
		set("rigidity",50);
		set("long",
	"���������������Ѫɫ���ձ�����һֻ��ͷ��\n");
	}
	init_whip(80);
	setup();
}
