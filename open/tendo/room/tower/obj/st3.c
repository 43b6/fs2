#include <weapon.h>
#include <ansi.h>

inherit STICK;

void create()
{
        string na;
        object me;
        me = this_player();
        na = (me->name(0));

        if (me)
           set_name(na+"[1;37m��[1;33m�Ǻ���[0m",({"stick"}));
        else
         { set_name("[1;33m�Ǻ���[0m",({"stick"})); }
        seteuid(getuid());
        set_weight(8000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long",@LONG

        �Ϲ����ر���֮һ�ġ����Ǻ�������!!

LONG);
        set("value",12000);
        set("no_drop",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_give",1);
        set("no_auc",1);
        set("material", "silver");
        set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
        }
        init_stick(60);
        setup();
}
int query_autoload() { return 1; }


