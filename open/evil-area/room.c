inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",BBLU+YEL"震邪道"NOR);
        set("long",@LONG
眼前一条木制的滑行道...
LONG);
        setup();
}

void init()
{
        object me=this_player();
        message_vision(HIY"$N脚一个踏不稳，整个人顺势滑了下去～\n"NOR,me);
	call_out("check",1,me);
}

int check()
{
object me=this_player();
        if(!me->query_temp("evil/wo_enter"))
                me->move(__DIR__"e00.c");
        else
                me->move(__DIR__"e04.c");
        	message_vision(HIY"\n$N滑出了木制滑行道，〔碰〕的一声跌坐在地。\n"NOR,me);
}