#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("ʥ��̱��",({"communion-cloth","cloth"}) );
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","silk");
        set("unit","��");
        set("value", 100);
        set("armor_type","cloth");
        set("armor_prop/armor", 2);
        set("long","
�������ϼ򵥷��ƶ���.�·���ǰ�������ʥ��̵�ʥ��ͼ��,
ʥ��̽��ڵĻ�����װ��\n");
        }
         setup();
}





