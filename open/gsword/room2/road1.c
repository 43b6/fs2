//road1.c
inherit ROOM;

void create ()
{
  set ("short", "˫����");
  set ("long", @LONG
�谵���ܵ������ڻ����������������������ڰ���..�㷢������˫���������㿴...
�˴��κ�ֻ��һ������..������..��ֻ�ܹԹԵ���ǰ������....��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room2/road2",
]));
  set("no_magic", 1);
  set("no_transmit", 1);
  set("no_fight",1);
  setup();
}
