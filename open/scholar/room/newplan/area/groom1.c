// Room: /u/s/sueplan/newplan/area/groom1.c
inherit ROOM;

void create ()
{
  set ("short", "С·��");
  set ("long", @LONG

��շ��Ű���, �����������Ƿǳ��ĺ���, ·�Ͽ����������
�����質, ����������ޱȵ���졣

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"groom2.c",
]));
  set("outdoors", "/u/s");
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/man_koo.c" : 1,
]));

  setup();
}
