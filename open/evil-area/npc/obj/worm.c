inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
        set_name(HIG"结界虫"NOR,({"worm"}));
        set_weight(10);
        if(clonep())
                set_default_object(__FILE__);
        else
        {
        set("value",100);
        set("unit","堆");
        set("base_unit","只");
        set("long",
"一只闪烁着七彩颜色的虫子，相传此虫能自由的游走于任何一个空间，
是存在于空间与空间交会处的虫子，如果有人不小心迷失于空间的交会
处，只要跟随着(accompany)它就能顺利的离开，但是....却不晓得会从那
出来...
\n");
        }
        set_amount(1);
        setup();
}

void init()
{
add_action("do_accompany","accompany");
}

int do_accompany(string arg)
{
object me,ob,env;
int i;
        me = this_player();
        env = environment(me);
        if( !arg )
                return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
                return 0;
        if( ob != this_object() )
                return 0;
        if( !env->query_temp("evil-place") )
                return notify_fail(HIG"结界虫躲在你的胸口处不敢出来。\n"NOR);
        message_vision(HIG"
$N跟随着$n"HIG"，只见$n"HIG"不断的啃食着七彩通道～

没多久，$N被吸入了$n"HIG"所咬破的地方。\n"NOR,me,ob);
        message_vision(HIY"\n$N突然来到了这里。\n"NOR,me);
        add_amount(-1);
return 1;
}
