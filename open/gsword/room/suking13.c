// Room: /u/s/smore/room/suking/suking13.c

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�������гǹط���ĵط�������������ɫɫ�ķ��ˣ������
������������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/suking4",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/jail" : 1,
]));

  setup();
}
