// Room: /u/m/moner/open/room/r11.c 
inherit ROOM;
void create ()
{
  set ("short", "�����ͷ");
  set ("long", @LONG

   ���������ͷ, ��������ɫ�ѱ�Ũ�ܵ�֦Ҷ����ס, ���ڲݵ���,
��ʱ�����O�O�@�@������, �����ķ�, һ����ӰҲû��, ����ǰ����
��������������֮��, ��ÿ��һ��, �������ͨ��ͨ����, ��������
��������һ��, ���ӵ�С������, ����ɽկ���ڵ��ˡ���


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r12.c",
  "enter" : __DIR__"r10.c",
]));
  set("outdoors", "wind");

  setup();
  replace_program(ROOM);
}
