// Room: /open/gsword/room/g2-12.c
inherit ROOM;

void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG
�����ɽ����ڵ�����ƽʱ�����ĳ��� ,�㿴������λ�ɽ����������Ӻ����� ,
����һ�µĺ����� ,���ȫɽ ,�������ɽ����������ʢ ,�⿴������ ,���
���װ˾ų��� .

LONG);

  set("objects", ([ /* sizeof() == 1 */
	"/open/gsword/npc/trainee3":1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g2-12.c",
  "north" : "/open/gsword/room/g2-6.c",
]));

  setup();
}
