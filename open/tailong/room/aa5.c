// Room: /u/o/ookami/newarea/aa5.c 
inherit ROOM;
 
void create ()
{
  set ("short", "����");
  set ("long", @LONG
�ߵ�����,ǰ�����Ǹղ������Ĵ�������,̧ͷһ��,ֻ�����ŵ���
��д���ǳ�ʥ����������,������������,���ﲻ����������?ǰ����һ
��Сɮ,ȥ����������
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"aa6",
  "south" : __DIR__"aa4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/tailong/npc/monk1.c":1,
]));
  set("outdoors", "/u/o/ookami/newarea");

  setup();
  replace_program(ROOM);
}
