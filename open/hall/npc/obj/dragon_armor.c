#include <armor.h>

inherit ARMOR;

void create()
{
        set_name("[1;34m�����ۼ�[0m", ({ "dragon armor", "armor" }) );
        set_weight(5000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "�������ഫ�Ǵ�ǧ�����������ϰ����Ƴɣ����ϴ˼ױ�ɵ�ǹ���룬��\n"
                "�����ҡ�\n");

                set("material", "gold");
                set("value", 2000);
                set("armor_prop/armor", 15);
        }
        setup();
}
