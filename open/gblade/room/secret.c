#include <room.h>
#include "/open/open.h"
inherit ROOM;
void create()
{
set("short","ħ��������");
set("long", @LONG

������һ�������ң����ܹ��߼�������ǰ���˾�������һʱħ�����˵�
����ħ�����������������������ǵ��ۡ�

LONG
);
        set("exits", ([
"north":"/open/gblade/room/room1.c",
"east":"/open/gblade/mroom/room1.c",
"northwest":"/open/gblade/mroom/room9.c",
"west":__DIR__"eqroom1.c",
"out":"/open/snow/room/hole2.c",
        ]) );
	set("light_up",1);
	set("objects",([
"/daemon/class/blademan/npc/train3":2,
"/daemon/class/blademan/master_mou.c":1,
	]));
  set("valid_startroom", 1);
        setup();
call_other("/obj/board/mou_b","???");
}
int valid_leave(object me, string dir)
{
if(dir=="west")
if((me->query("family/family_name")!="ħ��Ī��")&&me->query("family/family_name")!="ħ����")
return notify_fail("ֻ��ħ���ſɽ���\n");
  return ::valid_leave(me,dir);
}
