
#include <room.h>
#include "/open/open.h"
inherit ROOM;
void create()
{
set("short","������");
set("long", @LONG

    �������ܲ���������������������ǰ��һ����������
ϰ�䣬�������õı����ǳ�ҫ�ۣ�ʹ���۾������Ų�����
һϯ����Ҳҫҫ���ˣ���ô�ߴ�ͦ�εĴ��Ī�Ǿ��Ƿ���
�������𡣡���

LONG
);
    set("exits", ([
   "north" : __DIR__"r37.c",
   "east"  : __DIR__"r35.c",
        ]) );
	set("light_up",1);
  set("valid_startroom", 1);
  set("no_magic", 1);
  set("no_transmit", 2);

        setup();
}
int valid_leave(object me, string dir)
{
if(dir=="north")

if((me->query("class")!="soldier")&&me->query("class")!="soldier")
return notify_fail("ֻ��Ӷ���ſɽ�ȥ��\n");
  return ::valid_leave(me,dir);
}
 
