#include <armor.h>
#include <ansi.h>
inherit PANTS;
void create()
{
       set_name(MAG "����ҹ�п�" NOR, ({ "ninja pants" ,"pants" }) );
       set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 0);
                set("long","�Լ��͵ĺ�ɫ��˿֯��, �����ҷ������ߡ�\n");
                set("material", "steel");
        set("armor_prop/armor", 30);
        set("no_auc",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
        set("armor_prop/dagger", 10);
        set("armor_prop/throwing", 10);
        set("armor_prop/move", 20);
        set("armor_prop/dodge", 20);
        }
                setup();
}
