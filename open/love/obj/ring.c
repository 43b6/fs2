// Qc by Anmy 98/7/6
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
          set_name("����",({"power ring","ring"}));
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","����һ��ָ�������Ϻ������������������ƻ�������\n");
                set("value",1000);
                set("material", "crimsonsteel");
        }
        init_unarmed(40);
        setup();
}
