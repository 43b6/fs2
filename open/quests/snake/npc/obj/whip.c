#include <weapon.h>

inherit WHIP;

void create()
{
        set_name("����",({"whip"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
          	set("value",100);
                set("material","iron");
                set("rigidity",50);
                set("long",
        "һ���洦�ɼ��ı��ӡ�\n");
        }
        init_whip(10);
        setup();
}