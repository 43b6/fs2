//open/prayer/room/youkoun/1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�����Ŵ���");
        set("long",@LONG

        �ڴ����Ķ���վ��һλ�һ���, רְ���������Ĺ���. ��
        ������������. �������ʥ���ͽ, ������ʱ��ȥ������
        ϰ.

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "southwest":__DIR__"4",         //����
        "west":__DIR__"2",              //����
        "east":__DIR__"28",
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/right7" : 1,          //�һ���
]));
  setup();
}

int valid_leave(object me, string dir)
  {
  if(dir=="east" && me->query("class") != "prayer")
        return notify_fail("���ǽ�ͽ�ǲ��ܽ���� !\n");
        
        return ::valid_leave(me,dir);
}

