#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("[1;31m��Ѫ��[0m", ({ "blood sword", "sword" }) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "һ���Գ�������������ƵĽ����ǰ��ܡ��������֮������");
                set("value",10000);
                set("material", "blacksteel");
        }
        init_sword( 50);

        set("wield_msg", "$N����[1;31m��Ѫ��[0mɢ����ѣĿ�ĺ�⡫��\n");
        set("unwield_msg", "$N���е�$n�ĺ�⻺����ȥ��\n");

        setup();
}
