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
           set_name(na+"��[32m����ʥ��[0m",({"dragon-bone blade","blade"}));
        else
         { set_name("[32m����ʥ��[0m",({"dragon-bone blade","blade"})); }
        seteuid(getuid());
        set_weight(25000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

	����ʥ��, �˵���ʮ�����֮һ, ��������������� 
	��ʯ���ǲ���ҫ��, ֻ����������͸������֮��, ��
	�����˰�������!!�������Ͼ���ͬһ������һ��, ��
	�����!!

LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
//       set("wield_msg", "$N�ӵ��ʽ�$n�γ���֮�󣬻�����硣\n");
//      set("unwield_msg", "$N���·���$n�������������ɫ�ĺ��ⱻ�������ڱ��ˡ�\n");
        }
        init_blade(115);
        setup();
}               
int query_autoload() { return 1; }

      