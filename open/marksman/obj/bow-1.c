#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

        set_name("������", ({ "bow" }) );
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","һ���ɰ�������������ɵĹ���\n");
        set("value", 0);
        set("material", "wood");
        }
        init_bow(5);
        setup();
}
