inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
        set_name(YEL"木牷块"NOR,({"wood stone","stone"}));
        set_weight(10);
        if(clonep())
                set_default_object(__FILE__);
        else
        {
        set("value",10000);
        set("unit","堆");
        set("base_unit","块");
        set("long",
"一个长条圆筒状的木块～
看起来似乎是某一个木雕左手(left-head)的一部份～
谣传如果将此物放置于(place)原本的位置，就会
被带到某一个奇妙的地方。
\n");
        }
	set_amount(1);
        setup();
}

void init()
{
add_action("do_lock","lock");
add_action("do_place","place");
}

int do_lock(string arg)
{
object me,env;
        me=this_player();
        env=environment(me);
        if(!arg || arg!="left-head")
                return 0;
        if(!env->query("wood-area") || !env->query("evil-area") || !me->query_temp("evil/king/statue_search_wood"))
                return notify_fail("你眼前没有任何东西可以符合你手上拿的木牷块，所以不需要锁定。\n");
        me->set_temp("evil/king/lock-left",1);
        tell_object(me,"你将手上拿的这块木牷块锁定于木像的左手部位。\n");
return 1;
}


int do_place(string arg)
{
object me,env;
        me=this_player();
        env=environment(me);
        if(!arg || arg!="木像")
                return 0;
        if(!env->query("wood-area") || !me->query_temp("evil/king/statue_search_wood") || !env->query("evil-area"))
                return notify_fail("你找不到可以放置的地方。\n");
        if( !me->query_temp("evil/king/left-head") )
        {
                message_vision("$N不晓得要将$n往哪摆\。\n",me,this_object());
                tell_object(me,"(请先锁定[lock]欲将放置的部位。)\n");
                return notify_fail("你突然觉得自己好像傻瓜。\n");
        }
        message_vision(YEL"$N将$n放置于木像的左手部位。

喀～的一声，木像突然开始活动了起来～

一瞬间～木像展开双手将$N整个人抱住，只见到$N整个人融入了木像内，消失不见～

\n"NOR,me,this_object());
        me->delete_temp("evil/king/lock-left");
        me->delete_temp("evil/king/statue_search_wood");
        me->move(__DIR__"k-02");
        message_vision("$N突然出现在这。\n",me);
	add_amount(-1);
        return 1;
}
