// Room: /d/oldpine/epath2.c

inherit ROOM;

void create ()
{
  set ("short", "����ӭ��");
	set( "build", 282 );
  set ("long", @LONG
��������ɽС����,������������ӭ��,���̵���Ҷ,ͦ�ε�֦
��,���������ĵ�����,��ӭ��ĵ���,��̧ͷ����, ��Ȼ����ɽ��
������ǰ,������ǽ�����ɽ�����:____����ӭ��____ .
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"froad2",
  "east" : __DIR__"su4",
"north" : "/open/tendo/m1",
]));

  setup();
}
