// Room: /open/gsword/room/su9.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
���ڿ�����ʯ������,�����������гǵ�����,���гǵ�һ���
�񶼾�ס�ڴ�,����Ըо������гǵ�����������,���������ľ���
���ڽ���,����һ��ƽ���ĳ���.����Ķ����м��õ�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/man" : 1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 3 */
  "west" : "/open/gsword/room/su8",
  "north" : "/open/gsword/room/su10",
  "east" : "/open/gsword/room/restroom",
]));

  setup();
}
