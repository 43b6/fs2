#include <ansi.h>
inherit EQUIP;

void create()
{
set_name("��ڤ����",({"ghost feather","feather"}) );
set_weight(3000);
if (clonep() )
set_default_object(__FILE__);
else{
set("long","���Ϲ�ħ��--⨍b��Ƥë���Ƴɵ����֣�����ħ���������ϡ�\n");
set("armor_type","head");
set("material","blacksteel");
set("unit","��");
set("armor_prop/armor",8);
set("value",2000);
set("armor_prop/dodge",6);
set("armor_prop/parry",4);
setup();
}
}