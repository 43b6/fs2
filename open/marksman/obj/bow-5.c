#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("˪ѩ��",({"snow bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","һ�Ѿ�������ѩ�زпῼ��,��������Ĺ���\n");
set("material","copper");
        }
        init_bow(25);
set("value",0);
        setup();
}
