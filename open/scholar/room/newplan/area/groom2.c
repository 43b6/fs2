// Room: /u/s/sueplan/newplan/area/groom.c
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
  "west" : __DIR__"groom3.c",
  "east" : __DIR__"groom1.c",
]));

  setup();
}
