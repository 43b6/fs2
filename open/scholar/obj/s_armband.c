#include <armor.h>
#include <ansi.h>
inherit ARMBANDS;
void create()
{
set_name("�����ۻ�",({"ice_armband","armband"}));
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit","��");
        set("value",8000);
        set("long","������ǧ�������Ƴ�, �����ܻ���\n");
  // Swy QC 98/3/16
        set("armor_prop/armor", 4);
        set("armor_prop/force",3);
        set("armor_prop/parry",3);
        }
        setup();
}
