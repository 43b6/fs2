// Room: /u/o/ookami/newarea/aa2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "���ɽ��");
  set ("long", @LONG
���Ѿ��ߵ����ɽ��ɽ����,�������һ����,����Ŀ�����ƽ�غ�
����,��������,�������Ǹߴ����ľ,������һ����ʯС��,����������
���˿��������,��������С����,��������ʲô����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"aa3.c",
  "down" : __DIR__"aa1",
]));
  set("outdoors", "/u/o/ookami/newarea");

  setup();
  replace_program(ROOM);
}
