// Room: /u/o/ookami/newarea/aa4 
inherit ROOM;
 
void create ()
{
  set ("short", "���ɽ��");
  set ("long", @LONG
�����ߵ�����,�㿴��ǰ����һ����̻Ի͵Ľ�����,������һ����
��,����ԶԶ��ȥ�ֺ�����һ������,����̾Ϊ��ֹ,��ϸ����,��Ӧ�þ�
���������������˰�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"aa3.c",
  "north" : __DIR__"aa5.c",
]));
  set("outdoors", "/u/o/ookami/newarea");

  setup();
  replace_program(ROOM);
}
