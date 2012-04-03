// Room: /open/hall/hall.c

inherit ROOM;

void create ()
{
  set ("short", "�����������Ź㳡");
  set ("long", @LONG
�����Ǿ�����������ǰ�㳡���������ɫ�Ĵ��ţ�͸��һ��ׯ����
�µ�����!!�ſ����������ľͷ��ɵġ����������������������ż���
�ٷ���������һЩ�涨�ĸ�<<paper>>��Ȱ������ǿ�һ��....!!
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"way2",
  "north" : __DIR__"hall_2",
  "out" : __DIR__"halldoor",
  "east" : __DIR__"way1",
]) );

  set("item_desc", ([ /* sizeof() == 1 */
  "paper" : "    ����ר������ܸ棬������ʮ����֮��Ů�������κ����в���
  ��Ϊ�����ɼ��(accuse)��",
]) );

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/garrison_2" : 2,
]) );


  setup();
}
