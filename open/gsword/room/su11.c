// Room: /open/gsword/room/su11.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
���ڿ�����ʯ������,�����������гǵ�����,���гǵ�һ���
�񶼾�ס�ڴ�,����Ըо������гǵ�����������,���������ľ���
���ڽ���,����һ��ƽ���ĳ���.
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "south" : "/open/gsword/room/su10",
  "north" : "/open/gsword/room/su12",
  "west" : "/open/gsword/room/suroom4",
  "east" : "/open/gsword/room/suroom2",
]));

  setup();
}
