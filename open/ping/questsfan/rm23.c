// Room: /u/d/dhk/questsfan/rm23
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
������Լ����ɽɽ�������������ߺ����ͨ�������ո��ء�
���˵������������ɣ��������أ������������ҡ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"rm8",
  "eastup" : __DIR__"rm11",
]));
  set("outdoors", "/u/d");

  setup();
}
