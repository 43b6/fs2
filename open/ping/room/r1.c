// Room: /u/m/moner/open/room/r1.c 
inherit ROOM;
 
void create ()
{
  set ("short", "����");
  set ("long", @LONG
�������װ���ӵ�еĴ���, ��������ȫ�ǽ��ɫ, ���е�װ��Ʒ��
�ǻƽ����ơ��װ�Ϊ����ɽկ���ϴ�, �书ҲΪ�����, ��������
�������ĸ�����������, �����㴳����, ����ݺݵĵ�����, �ƺ�
��ʱ׼����ɱ�硣

LONG);

  set("exits", ([ /* sizeof() == 1 */
"west":"/open/scholar/room/wife.c",
  "south" : __DIR__"r2.c",
]));
set("objects",([
"/open/ping/npc/6.c":1,
]));

  setup();
  replace_program(ROOM);
}
