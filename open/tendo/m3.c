// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
	set ("short", "��·");
  set ("long", @LONG
�����쬣����������Զ����ɽ������ϡƮ�ż�����ƣ�һ
Ƭ���ס�������ֲ�����ɽ����?!
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
"west" : "/open/tendo/m4",
"east" : "/open/tendo/m2",
]));

  setup();
}
