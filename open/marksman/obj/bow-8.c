#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("�͹Ź�",({"old bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","һ�Ѵ�˵���͹�֮�߹Ǳ仯�����Ĺ���\n");
   
set("material","steel");
        }
        init_bow(40);
set("value",0);
        setup();
}

   

