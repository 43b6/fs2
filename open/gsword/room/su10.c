// Room: /open/gsword/room/su10.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
���ڿ�����ʯ������,�����������гǵ�����,���гǵ�һ���
�񶼾�ס�ڴ�,����Ըо������гǵ�����������,���������ľ���
���ڽ���,����һ��ƽ���ĳ���.��Ķ�����һ��˽��, ��������һ��
��.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/sworder" : 1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "west" : "/open/gsword/room/swordhouse",
  "north" : "/open/gsword/room/su11",
  "south" : "/open/gsword/room/su9",
  "east" : "/open/gsword/room/school",
]));

  setup();
}
