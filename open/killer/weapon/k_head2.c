#include <ansi.h>
inherit EQUIP;

void create()
{
set_name("��������",({"nija feather","feather"}) );
set_weight(1000);
if (clonep() )
set_default_object(__FILE__);
else{
set("long","
�����˿֯�ɵ�ͷ���������������������ϡ�\n");

set("armor_type","head");
set("material","blacksteel");
set("unit","��");
set("armor_prop/armor",5);
set("value",450);
set("armor_prop/throwing",5);
setup();
}
}