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
           set_name(na+"��[32m�������[0m",({"dragon-tooth blade","blade"}));
        else
         { set_name("[32m�������[0m",({"dragon-tooth blade","blade"})); }
        seteuid(getuid());
        set_weight(25000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

	һ�����ƵĴ�, ����ʦ��������Ĺ����м����˻ƽ� 
	����˴˵���Ӳ��, �ܶ���ǿ��!!�����ڵ����������
	��������Ϊ����ɱ����������!!

LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
//        set("wield_msg", "$N�ӵ��ʽ�$n�γ���֮�󣬻�����硣\n");
        }
        init_blade(90);
        setup();
}               
int query_autoload() { return 1; }

      