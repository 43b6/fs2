// Room: /open/gsword/room/g3-1.c
inherit ROOM;

void create ()
{
  set ("short", "�����Է�");
  set ("long", @LONG
һ����Ĵ��� ,һ�źô�Ĵ��Ӷ����� ,��������˵Ļ� ,��˵
Ҳ��˯������ʮ�� ,�����г���һ�Ŵ��� ,�������� ,�������ɽ�����
�ĳ��� ,��ũ ,Сͯ�� ,�Ծ��ڴ� .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/g3-2",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/worker":1,
  "/open/gsword/npc/worker-1":1,
]));

  set("light_up", 1);

  setup();
}
