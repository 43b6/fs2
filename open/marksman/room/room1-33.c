// Room: /u/f/fire/room/room1-33
#include <ansi.h>
#include <marksman.h>
inherit ROOM;

void create ()
{
  set ("short", "[32m��[2;37;0m");
  set ("long", @LONG
���ªª��װ�꣬ƽƽ������С���ݡ�ɢ����ƽ����ƽ����Ϣ��
���׿ɰ��ĳ�ɳ���ڣ�����Ŭ���Ĵ������õļ�ͥ�����������ڰ���
Ϊ��������󶫶���
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room1-10",
]));
  set("objects", ([ /* sizeof() == 2 */
C_NPC"/oldwoman" : 1,
C_NPC"/oldman" : 1,
]));

  setup();
}
