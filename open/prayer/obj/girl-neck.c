#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("ʥŮ����",({"girl-lace","lace"}) );
        set_weight(900);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","gem");
        set("unit","��");
        set("value", 10000);
        set("armor_type","neck");
        set("armor_prop/armor", 4);
        set("long","
��������Ƴɣ���Ů�Եľ���װ��ƷͬʱҲ�Ƿ��������ķ��ߡ�\n");
        }
         setup();
}





