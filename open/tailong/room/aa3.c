// Room: /u/o/ookami/newarea/aa3.c 
inherit ROOM;
 
void create ()
{
  set ("short", "���ɽ��");
  set ("long", @LONG
���Ѿ��ߵ����ɽ��ɽ����,�������һ����,����Ŀ�����ƽ�غ�
����,��������,�������Ǹߴ����ľ,��
������һ����ʯС��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "down" : __DIR__"aa2.c",
  "northwest" : __DIR__"aa4",
]));
  set("outdoors", "/u/o/ookami/newarea");

  setup();
  replace_program(ROOM);
}
