
#include <weapon.h>
#include <ansi.h>
inherit LANCE;
void create()
{
        seteuid(getuid());
set_name("���",({"snake lance","lance"}));
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
    set("long","��֧ǹ���е�����һ����Ť��.\n");
                set("value",5500);
                set("material", "steel");
        set("wield_msg", "$Nװ�����������ָио����غõġ�\n");
         }
        init_lance(25);
        setup();
}

