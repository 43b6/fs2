#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        string na;
        object me;
        me = this_player();
        na = (me->name(0));

        if (me)
set_name(na+"[1;37m����«��[0m",({"sword"}));
        else
{ set_name("[1;37m��«��[0m",({"sword"})); }
        seteuid(getuid());
        set_weight(5000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

        һ�Ѿ��Ƶĳ���, ����ʦ�����侫տ�����ս����е�����
        ��, ������ߴ˽���ն������!!��һ�Ѳ��ɶ�õĺý�!!


LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "iron");
        set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");

        }
        init_sword(50);
        setup();
}
int query_autoload() { return 1; }



