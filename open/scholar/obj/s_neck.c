#include <ansi.h>
#include <armor.h>
inherit NECK;
void create()
{
     set_name("������׹", ({"elephant_gem","gem"}) );
     set_weight(1500);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "��");
            set("value", 7000);
            set("long","���ɰ�������ĥ�ƶ��ɡ�\n");
// Swy QC 98/3/16
            set("armor_prop/parry",2);
            set("armor_prop/attack",2);
            set("armor_prop/armor",4);
     }
            setup();
}

