inherit EQUIP;
#include <ansi.h>
void create()
{
        seteuid(getuid());
        set_name(HIR"������������"NOR , ({ "butterfly cloth" }) );
       	set("long","һ�������ĺ�ɫ���ѣ������Խ������ż�ֻ������\n");
        set_weight(2500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 80000);
                set("material", "cloth");
                set("armor_type", "cloth");
		set("armor_prop/armor",22);
		set("armor_prop/dodge",5);
              }



}
