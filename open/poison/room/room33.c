inherit ROOM;

void create ()
{
  set ("short", "ɽ��С��");
  set ("long", @LONG
��·ɭ���������� ,���ﻨ�� ,�������ĺ��ӻص���ɽ��֮��
 ,���������Ŀ����� ,����һ���õط���

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room34.c",
  "east" : __DIR__"room32",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/u/h/houng/mob/monkey1.c" : 1,
]));

  setup();
}
