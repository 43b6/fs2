// green_whip.c
#include <weapon.h>

inherit WHIP;

void create()
{
        set_name("������",({"green whip","whip"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
                set("value",3000);
                set("material","ironsteel");
		set("rigidity",40);
                set("long",
        "�������ӳ��ֱ���ɫ���ձ�����һֻ��ͷ��\n");
        }
        init_whip(60);
        setup();
}
