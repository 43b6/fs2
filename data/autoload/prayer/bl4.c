#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        string na;
        object me;
        me = this_player();
        na = (me->name(0));

        if (me)
           set_name(na+"��[36m������[0m",({"dragon blade","blade"}));
        else
         { set_name("[36m������[0m",({"dragon blade","blade"})); }
        seteuid(getuid());
        set_weight(25000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

	[36m~~������~~[0m

LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
//        set("wield_msg", "$N�ӵ��ʽ�$n�γ���֮�󣬻�����硣\n");
//      set("unwield_msg", "$N���·���$n�������������ɫ�ĺ��ⱻ�������ڱ��ˡ�\n");
        }
        init_blade(95);
        setup();
}               
int query_autoload() { return 1; }

      