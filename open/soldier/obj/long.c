
#include <weapon.h>
#include <ansi.h>
inherit LANCE;
void create()
{
        seteuid(getuid());
set_name("��ǹ",({"long lance","lance"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
    set("long","���ǹ���ǹ�䶼��������������,��������ǹ���ľǹ��һ��.\n");
                set("value",3000);
                set("material", "iron");
 }
        init_lance(20);
        setup();
}

