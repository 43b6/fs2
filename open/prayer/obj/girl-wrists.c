#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("ʥŮ����",({"girl-wrists","wrists"}) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","gem");
        set("unit","��");
        set("value", 10000);
        set("armor_type","wrists");
        set("armor_prop/armor", 4);
        set("long","
��������Ƴɣ���Ů�Ե�װ��ƷͬʱҲ�Ƿ����þߡ�\n");
        }
         setup();
}





