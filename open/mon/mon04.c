inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "����ɽ��");
  set ("long", @LONG
����һ����;���棬�������ߵ��⼫��ʢ���ġ�����ɽ���ˣ�̧
ͷ������ǰ�ĳ���ɽ��ɽ���ϰ�������һƬ����ɫ֮׳�ۣ������̾
���ѡ������ڳ���ɽ�ıߵ����̣���Ϊѩ�׵�ɽͷ����һ�����С�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bembembem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"mon03",
  "westdown" : "/open/snow/room/room3.c",
  "north" : __DIR__"mon05",
]));

  setup();
}

