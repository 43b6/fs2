// Room: /u/s/sueplan/newplan/area/get2.c
inherit ROOM;

void create ()
{
  set ("short", "С·��");
  set ("long", @LONG

��շ��Ű���, �����������Ƿǳ��ĺ���, ·�Ͽ����������
�����質, ����������ޱȵ���졣�����㿴��һ���׷���������
��ǰ̾����, ��֪��������ô��?
LONG);

  set("outdoors", "/u/s");
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"groom2.c",
  "west" : __DIR__"groom4.c",
]));

  setup();
}
