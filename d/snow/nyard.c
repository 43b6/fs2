// Room: /d/snow/nyard.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m �鷿");
  set ("long", @LONG
������һ��������൱�ɾ����鷿����ľ����������������Ե�
ʮ�ֿ��������������һ����ܣ��������һ���ŵĹ��飬�����߳���
�ſ��Կ����쾮��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"inneryard",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/girl" : 1,
]));

  setup();
}
