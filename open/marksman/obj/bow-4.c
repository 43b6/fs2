#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("���乭",({"force bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
set("value",0);
        set("long","һ�����������������Ĺ���\n");
set("material","iron");
        }
//init_bow(20)
init_bow(5);
        setup();
}

   

