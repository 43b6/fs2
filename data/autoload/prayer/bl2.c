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
           set_name(na+"��[31m���浶[0m",({"fire blade","blade"}));
        else
         { set_name("[31m���浶[0m",({"fire blade","blade"})); }
        seteuid(getuid());
        set_weight(25000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

	һ�Ѻ�������Ĵ�, ����ʦ�����侫տ�����ս�������
	�ɾ��л�����ȶ�, ������ߴ˵����˺���!!��һ�Ѳ���
	��õĺõ�!!

LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
        set("wield_msg", "[36m$N�ӵ��ʽ�$n�γ���֮��[31m�������[0m��\n");
        set("unwield_msg", "[36m$N���·���$n������������[31m��ɫ�ĺ���[36m���������ڱ���[0m��\n");
        }
        init_blade(85);
        setup();
}               
int query_autoload() { return 1; }

      