// Room: /u/d/dhk/questsfan/rm22
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
������Լ����ɽɽ�������������ߺ����ͨ����ʯ�֡塣
�˵������������ɣ��������أ������������ҡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"rm15",
  "southeast" : __DIR__"rm8",
]));
  set("outdoors", "/u/d");

  setup();
}
