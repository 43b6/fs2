// Room: /u/r/rence/room/room8.c

#include <room.h>
#include "/open/open.h"

inherit ROOM;

void create()
{
        set("short","��ɱ����������");
        set("long",@LONG
��������ɱ�������ĳ���,ֻ���ڳ��ڴ���һĿ¶��
�����������վ����,һ��ɱ�����ڵ�����......... 
��ǽ�Ϲ���һ�����(picture):
          
          ����ɽ��ǿ��֮һ...���ֳ塱

LONG);
        set("outdoor", "/u/k/kael/room/");
        set("exits", ([ /* sizeof() == 4 */
        "����":__DIR__"room2",
        "����":__DIR__"room3",
        "����":__DIR__"room4",
        "����":__DIR__"room5",
	"up" : "/u/k/kael/room/tower6",
        ]) );
        set("objects",([ /* sizeof() == 1 */
  "/u/k/kael/npc/jen4-1.c" : 1,
]));
  setup();
}
int valid_leave(object me, string dir)
{
	if(dir=="up"&&present("zon-jon jen",environment(me)))
return notify_fail("���ֳ�����һ�� ,˵��:Ҫ����¥,�ȴ������˵!\n");
	return ::valid_leave(me,dir);
}









