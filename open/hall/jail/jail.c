// Room: /open/hoom/hall/jail.c

inherit ROOM;
#include <room.h>

#include <ansi.h>

void create()

{

        set("short", "��ͷ��Ϣ��");
        set("long", @LONG
�������ͷ����ϯ����һ����̣��׳�������Ŷ����ȣ����������
С��..���ϰ��ż���С�˺�һ���׸ɣ���һ��ƺ����������ܵ�......
��ͷ�����Ϲ���һ��Կ�ף���������ò�Ҫ�н�������ͷ���������ǿ
׳..�ٺ�....
LONG);

        set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"jail1",
  "north" :__DIR__"jail2",

  ]));

        set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/j_head" : 1,
]));
create_door("out", HIR "��������������" NOR ,"enter",DOOR_CLOSED);
        setup();

}

