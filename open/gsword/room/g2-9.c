// Room: /open/gsword/room/g2-12.c
inherit ROOM;

void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG
�����ɽ����ڵ�����ƽʱ�����ĳ��� ,�㿴������λ�ɽ����������Ӻ����� ,
����һ�µĺ����� ,���ȫɽ ,�������ɽ����������ʢ ,�⿴������ ,���
���װ˾ų��� .����һ��С�������ɽ���԰ .

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/trainee2" : 1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/gsword/room/g2-10.c",
  "east" : "/open/gsword/room/g2-8.c",
  "northwest" : "/open/gsword/room/g4-7.c",
]));

  setup();
}
