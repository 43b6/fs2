#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
        set_name(MAG+"��"+YEL+"��"+MAG+"��"+NOR,({"unreal whip","whip"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
          	set("value",30000);
                set("material","iron");
                set("rigidity",50);
                set("long",
        "��������ֻ�б�ͷ���ձ������������������һ����һ�㣬�޷���������ͷ�ںδ���\n");
        }
        init_whip(100);
        setup();
}