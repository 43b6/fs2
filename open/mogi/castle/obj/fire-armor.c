//����ħ�� armor
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIR"�������"NOR,({"fire armor","armor"}) );
	set_weight(7000);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
һ���ɻ�������Ƭ������������Ƴɣ�����ȼ���ű��ڵ��һ�������ı��
\n");
        set("unit", "��");
        set("value",200000);
        set("armor_type","cloth");
        set("material","crimsonsteel");
	set("armor_prop/armor",22);
	set("armor_prop/unarmed",7);
        set("armor_prop/parry",7);
		set("need_exp",3000000);
set("wear_msg", HIY"$N����$n"HIY"����Ȼһ���һ��ѽ�$N�����ܻ�ס\n"NOR);
set("remove_msg", HIY"$N��$nж������"HIY"�����ܵĻ���Ҳ������ʧ�ˡ�\n"NOR);
        }
        setup();
}
int query_autoload()
{
 return 1;
}
