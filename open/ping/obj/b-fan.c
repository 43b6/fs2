#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("��\����",({"bone fan","fan"}) );
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�ɿ�\���Ƴɵ����ӣ���ɢ����һ�ɰ�Թ֮����\n");
        set("unit","��");
        set("value", 9000);
        set("material","blacksteel");
        }
        init_stabber(60);
        setup();
}

