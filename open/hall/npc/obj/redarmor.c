#include <armor.h>

inherit CLOTH;

void create()
{
        set_name("[1;37m��ѩħ��[0m", ({ "snow armor", "armor" }) );
        set_weight(5000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "�˼��ഫ�Ǵ�ǧ�꺮���������ɣ������൱�ķ�������");

                set("material", "iron");
                set("value", 2000);
                set("armor_prop/armor", 10);
        }
        setup();
}
