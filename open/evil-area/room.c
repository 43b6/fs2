inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",BBLU+YEL"��а��"NOR);
        set("long",@LONG
��ǰһ��ľ�ƵĻ��е�...
LONG);
        setup();
}

void init()
{
        object me=this_player();
        message_vision(HIY"$N��һ��̤���ȣ�������˳�ƻ�����ȥ��\n"NOR,me);
	call_out("check",1,me);
}

int check()
{
object me=this_player();
        if(!me->query_temp("evil/wo_enter"))
                me->move(__DIR__"e00.c");
        else
                me->move(__DIR__"e04.c");
        	message_vision(HIY"\n$N������ľ�ƻ��е�����������һ�������ڵء�\n"NOR,me);
}