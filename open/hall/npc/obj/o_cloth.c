#include <armor.h>

inherit CLOTH;

void create()
{
        set_name("���Ƴ���", ({ "officer cloth", "cloth" }) );
        set_weight( 500);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "Ϯ");
                set("long", "�˳����ǹٷ����Ƶģ������������ÿ��ġ�\n");

        set("material", "cloth");
                set("value",  200);
                set("armor_prop/armor",  5);
        }
        setup();
}
