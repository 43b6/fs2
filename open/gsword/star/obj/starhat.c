#include <ansi.h>
inherit EQUIP;

void create()
{
 set_name("�ǻ�֮��",({"starhat","starhat"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","����֮ʯ���� , ���в���ķ����� .\n");
        set("unit","��");
        set("value",2000);
        set("material","cloth");
        set("armor_type","head");
        set("armor_prop/armor",11);
        set("armor_prop/parry", 2);

        }
        setup();
}
