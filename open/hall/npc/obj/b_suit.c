#include <armor.h>

inherit CLOTH;

void create()
{
        set_name("[1;32m���̾�װ[0m", ({ "green suit", "suit" }) );
        set_weight(2000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "�˼�������â������ʮ�������ķ�������");

                set("material", "cloth");
                set("value", 2000);
                set("armor_prop/armor", 15);
        }
        setup();
}
