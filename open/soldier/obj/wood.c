
#include <weapon.h>
#include <ansi.h>
inherit LANCE;
void create()
{
        seteuid(getuid());
set_name("ľǹ",({"wood-lance","lance"}));
        set_weight(1500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
    set("long","����һ֧��ľ���Ƶ�ǹ,��ǿ�ð�!!\n");
                set("value",2000);
                set("material", "wood");
 }
        init_lance(10);
        setup();
}

