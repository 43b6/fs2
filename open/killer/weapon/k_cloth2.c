#include <ansi.h>

inherit EQUIP;

void create()
{
set_name("������߷�",({"nija cloth","cloth"}) );
set_weight(2000);
if( clonep() )
set_default_object(__FILE__);
else{
set("meterial","silk");
set("unit","��");
set("value", 10000);
set("armor_type","cloth");
set("armor_prop/armor", 13);
set("armor_prop/dodge", 7);
set("armor_prop/parry", 6);
set("long","���Ƕ�����ߵ�ר�÷��Σ�����ר�÷ǳ��ر�\n");
}
setup();
}
