// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
	set ("short", "��·");
  set ("long", @LONG
���ŵ�·���ߣ�������ȥ������ب����������ɽ������ã��
��ɫ���Դ��ż��ֺ������磬���㲻�Ծ��Ķ���˼����·���

LONG);

  set("objects", ([ /* sizeof() == 1 */
//"/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
"west" : "/open/tendo/m3",
"south" : "/open/tendo/m1",
]));

  setup();
}
