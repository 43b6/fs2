// Room: /open/gsword/room/su7.c

inherit ROOM;

void create ()
{
  set ("short", "��ʯС��");
  set ("long", @LONG
������ʯС����,�����Ѳ�����������,�ߴ�Ľ�����������,ȡ��
����һ��ƽ��,��������һ̶��ˮ,��������������������.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/gsword/room/suroom0",
  "west" : "/open/gsword/room/lake2",
  "south" : "/open/gsword/room/su6",
]));

  set("outdoors", "/open/gsword");

  setup();
}
