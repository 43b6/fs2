#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("���ǹ�",({"star bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","һ������̻��б������ǵĹ���\n");
set("material","copper");
        }
        init_bow(30);
set("value",0);
        setup();
}
