#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("[1;33m�з�����[0m", ({ "god sword", "sword" }) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "�ʵ�������ı�������˵�ִ˽�������ʥ�����١�����������ҫ�۵ı�\n"
                "ʯ���������򷢳����ɫ�Ľ�����\n");
                set("value",10000);
                set("material", "gold");
        }
        init_sword(20);

        set("wield_msg", "$N���ϡ���һ���������$n�������С�\n");
        set("unwield_msg", "$N�����е�$n�����ز��롫ʥ�����ʡ�\n");

        setup();
}
