inherit EQUIP;
#include <ansi.h>
void create()
{
        seteuid(getuid());
        set_name("�ٻ������" , ({ "flower cape","cape" }) );
       	set("long","���ϸ��¥������������֮���磬ɢ����������������\n");
        set_weight(1500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 25000);
                set("material", "cloth");
                set("armor_type", "cape");
		set("armor_prop/armor",7);
              }



}
