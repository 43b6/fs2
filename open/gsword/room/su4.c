// Room: /open/gsword/room/su4.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
���ڿ�������ʯ������,��ϡ���������гǹ�ȥ������,Ȼ
�����гǾ;�������Ҫ��,��Ȼû��,�б��й�ȥ��һ˿����,�Ϸ�
�����гǵ�����,�������������Щ����, �����������������з�
����,��ɽ.�������ǽ�����.
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/froad3",
  "south" : "/open/gsword/room/su3",
  "north" : "/open/gsword/room/suking",
  "east" : "/open/gsword/room/su13",
]));

  setup();
}
