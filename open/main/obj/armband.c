
#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name(HIR"��"+HIG"��"+HIC"���"NOR,({"Red chilin armband","armband"}));
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
          set("long","������ë�����ս��������������ʮ���죬�ӳ����������ϵ���Ƭ���������ɡ�");
        set("unit","��");
        set("value",1750);
        set("material","crimsonsteel");
        set("armor_type","armbands");
          set("armor_prop/armor",10);
        set("armor_prop/unarmed", 10);
        set("armor_prop/dodge", 10);
        }
        setup();
}
