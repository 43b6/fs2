#include <armor.h>
#include <ansi.h>
inherit FINGER;
void create()
{
        set_name("��˾���",({"bird_eye ring","ring"}) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value", 20000);
        set("material","gem");
        set("long","��ȡ���߲ʷ��֮���Ƴ�֮�䡣\n");
// Swy QC 98/3/16
        set("armor_prop/move", 2);
        set("armor_prop/dodge", 1);
        set("armor_prop/armor", 3);
        }
        setup();
}
