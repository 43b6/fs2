//king ring
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
        set_name(HIM"���ָ��"NOR,({"king ring","ring"}));
        set_weight(4500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
         set("long","��۴͸����ӵ������������ս�����������������\n");

                set("value",500000);
                set("material", "crimsonsteel");
                set("ski_level",70);
                set("ski_type","unarmed");
        }
          init_unarmed(80);

        setup();
}
