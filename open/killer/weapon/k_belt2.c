#include <ansi.h>
inherit EQUIP;
void create()
{
    set_name(HIY"��������"NOR, ({"belt"}) );
     set_weight(100);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("long", "�����˿���Ƴ�֮��������ȴ�������\n");
            set("unit", "��");
            set("armor_type", "waist");
            set("material", "leather");
            set("value", 5000);
            set("armor_prop/dodge",3);
            set("armor_prop/armor",4);
     }
}