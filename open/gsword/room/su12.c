// Room: /open/gsword/room/su12.c

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

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/gsword/room/su11",
  "west" : "/open/gsword/room/su13",
  "north" : __DIR__"suroom3_gate",
]));

  setup();
}
