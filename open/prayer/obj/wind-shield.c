#include <ansi.h>

inherit EQUIP;

void create()
{
        set_name("��֮����",({"wind-shield","shield"}) );
        set_weight(11500);
        if( clonep() )
                set_default_object(__FILE__);
else    {
        set("meterial","iron");
        set("unit","��");
        set("value", 2000);
        set("armor_type","shield");
        set("armor_prop/armor", 1);
        set("long","
����������ɵĶ���. �������ʥ��̵�ʥ��ͼ��, ʥ��̽��ڵķ��ߡ�\n");
        }
         setup();
}





