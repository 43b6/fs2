#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("���ṭ", ({"paint bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
set("value",0);
        set("long","һ��Ϳ����ɫ���ϵĹ���\n");
set("material","iron");
        }
        init_bow(15);
        setup();
}

   

