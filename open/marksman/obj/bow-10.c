#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("���ɹ�",({"support bow","bow"}));
set("value",6000);
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","һ�����廢�����������еĹ���\n");
set("material","steel");
        }
        init_bow(60);
set("value",0);
        setup();
}
