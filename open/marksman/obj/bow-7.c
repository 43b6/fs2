#include <weapon.h>
#include <ansi.h>

inherit BOW;

void create()
{

set_name("�Ϻ繭",({"rain bow","bow"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long","һ���ڹ�������֮��,ɢ�����Ϻ�ɫ���Ĺ���\n");
set("material","copper");
        }
        init_bow(35);
set("value",0);
        setup();
}

   

