// Room: /u/s/sueplan/newplan/area/get.c
inherit ROOM;

void create ()
{
  set ("short", "С·��");
  set ("long", @LONG

��շ��Ű���, �����������Ƿǳ��ĺ���, ·�Ͽ����������
�����質, ����������ޱȵ���졣

LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"groom3.c",
  "south" : __DIR__"groom5.c",
]));

  setup();
}
