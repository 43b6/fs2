#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        string na;
        object me;
        me = this_player();
        na = (me->name(0));

        if (me)
           set_name(na+"��[31m����צ[0m",({"mogi claw","claw"}));
        else
         { set_name("[31m����צ[0m",({"mogi claw","claw"})); }
        seteuid(getuid());
        set_weight(25000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

	�Ϲ����ر���֮һ�ġ���[31m����צ[0m����!!װ�������Ϻ�, 
	�ӳ�����ȭͷ���õ��˲�����������Ļ���!!
	
LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
//      set("wield_msg", "$N�ӵ��ʽ�$n�γ���֮�󣬺������䡣\n");
//      set("unwield_msg", "$N���·���$n�������������ɫ�ĺ��ⱻ�������ڱ��ˡ�\n");
        }
        init_unarmed(60);
        setup();
}               
int query_autoload() { return 1; }

      
