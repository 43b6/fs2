// ������item

inherit ITEM;
#include <ansi.h>
void create()
{
	set_name("��Ҷ����֮Ҷ", ({ "three_leaf" }));
	set_weight(5);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "Ƭ");
		set("long",
"��˵�е���Ҷ����֮Ҷ����˵�бٶ�֮Ч��\n");
		set("value", 1000000);
		set("material", "paper");
	}
        setup();
}
 
