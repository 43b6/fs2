#include <weapon.h>
#include <ansi.h>
inherit STABBER;

void create()
{
    set_name(HIR"�������"HIW"��"NOR, ({"fire needle", "fire needle"}) );
    set_weight(5500);
    if( clonep() )
    set_default_object(__FILE__);
    else{
    set("unit", "��");
    set("long","һ�������룬��˵Ϊ̫���Ͼ���������������ƳɵĻ��룡\n");
    set("wield_msg", "$N�������е�$n��һ��"HIR"����֮��"NOR"�������Ѩ����ʹ$N��ʱ�е�ȫ�����������\n");
    set("unwield_msg", "$N���������е�$n��"HIR"����֮��"NOR"�漴�Ӹ�Ѩ�ܳ���һʱ���������٣�\n");
    set("value", 500000);
    set("material", "iron");
}
    init_stabber(80);
    setup();
}