// pnx_needle.c by nike
#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        set_name(HIW"��"HIR"����"HIW"��"HIY"������"NOR, ({"pnx_needle", "needle"}) );
        set_weight(3000);
        if( clonep() )
        set_default_object(__FILE__);
        else
         {
        set("unit", "��");
        set("no_put",1);
        set("no_get",1);
        set("no_auc",1);
        set("no_drop",1);
        set("no_give",1);
        set("no_sell",1);
        set("material", "steel");
        set("wield_msg", "$N˫�ֽ�������$n��һ����������$N����Χ...\n");
        set("unwield_msg", "$N�����������е�$n������Ļ��Ҳ��֮��������...\n");
        set("long","�˰������ɡ����ˡ���β�����������ɵ������\n");
        set("value", 1000000);
         }
        init_stabber(120);
        setup();
}



