// Room: /open/gsword/room/su1.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
 ���ڿ�������ʯ������,��ϡ���������гǹ�ȥ������,Ȼ
�����гǾ;�������Ҫ��,��Ȼû��,�б��й�ȥ��һ˿����,����
�������гǵ�����,����������һ���סլ.
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/su2.c",
  "south" : "/open/gsword/room/su0",
  "west" : "/open/gsword/room/su5",
  "east" : "/open/gsword/room/su8",
]));

  setup();
}
