#include <ansi.h>
inherit EQUIP;
void create()
{
	set_name("�ڲ�˿��", ({"black cloth", "cloth"}) );
	set_weight(500);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "��");
		set("long","
ڤ�ƽ�ȡ���ڲ�����֮˿��֯�ɵ�˿�£����ᣬ��ȴ�쳣���͡�\n");
 
		set("value", 1000);
		set("material", "cloth");
		set("armor_type", "cloth");
		set("armor_prop/armor", 10);
            }
          setup();
}   







