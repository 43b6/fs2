// Room: /u/m/moner/open/room/r9.c 
inherit ROOM;
 
void create ()
{
  set ("short", "����");
  set ("long", @LONG

    �������ż���ӵ�еĴ���, ��������ȫ�ǹ�ͭɫ��, ���е�װ��Ʒ
Ҳ����ͭ��Ʒ��Ŀǰ�ż��ǹ������ɽկ�������������ͷĿ, ������
����������ĸ�����������, �����㴳����, ����ݺݵĵ�����, �ƺ�
��ʱ׼����ɱ�硣


LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room14.c",
]));
set("objects",([
"/open/ping/npc/4.c":1,
]));

  setup();
  replace_program(ROOM);
}
