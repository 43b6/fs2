// Room: /open/gsword/room/su8.c

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

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/su1",
  "east" : "/open/gsword/room/su9",
]));

  setup();
}
