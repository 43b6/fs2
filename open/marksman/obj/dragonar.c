//���� armor
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
          set_name(HIR"���ﻤ��"NOR,({"dragon armbands","armbands"}));
set_weight(5000);
        set("no_sell",1);
        set("no_auc",1);
set("no_get",1);
set("no_give",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","��˵����Ƥ�ͷ�Ƥ���ɵĻ���
\n");
        set("unit", "��");
        set("value",200000);
set("armor_type","armbands");
        set("material","crimsonsteel");
        set("armor_prop/armor",20);
        set("armor_prop/unarmed",7);
        set("armor_prop/parry",7);
set("wear_msg", HIY"$N����$n��������һ��������$N���ܻ�ס˫��\n"NOR);
set("remove_msg", HIY"$N��$nж������������Ҳ������ʧ�ˡ�\n"NOR);
        }
        setup();
}
int query_autoload()
{
 return 1;
}
