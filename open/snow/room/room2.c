#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
        set("short","ѩ�����Ʊ���");
        set("valid_startroom", 1);
        set ("long", @LONG
������ѩ���ɵ�ʥ�ء����Ʊ����������װ�����������䱦,����
�Եû����Ƿ�����ѩ���ɵ��Ӿۻ�ʱ�����й������ʱ���һ����Ҫ
�������ڱ������������һ��ʯ��(stone)��
LONG);
        set("item_desc",([
         "stone" : "
            ѩ����ѧ(snow-martial)  help snow-martial
            ѩ���ķ�(snowforce) help snowforce
            ѩ�Ի�����(snow-kee) help snow-kee
          \n"]));
        set("exits",([
                "up":__DIR__"eqroom",
                "south":__DIR__"room5_out",
                "north":__DIR__"room6",
                "east":__DIR__"room10",
                "west":__DIR__"room18",
        ]) );
        set("objects",([
        "/daemon/class/fighter/master_liu":1,
        ]));
        set("light_up",1);
        setup();
        call_other("obj/board/fighter_b.c","???");
}
 int valid_leave(object me, string dir)
{
if( dir=="up" )
   if( me->query("family/family_name")!="ѩ����")
                return notify_fail("ֻ��ѩ�Ե��Ӳſ��Խ��롣\n");
return ::valid_leave(me,dir);
 }

