inherit EQUIP;
#include <ansi.h>
void create()
{
        seteuid(getuid());
        set_name(HIM"ǧ����ָ��"NOR , ({ "crane finger","finger" }) );
       	set("long","���ϸ��¥��������������ָ��ָ�ף��������꣬��ʶ�Ŀ��\n");
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 25000);
                set("material", "cloth");
                set("armor_type", "finger");
		set("armor_prop/armor",6);
                set("armor_prop/parry",2);
              }



}
