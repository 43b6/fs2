// Room: /u/s/superobs/eqroom.c
inherit ROOM;

void create ()
{
  set ("short", "��Ʒ��");
  set ("long", @LONG
��������й����۽�Ʒ������....�Լ�����eq����ɫ��name������....
ϣ������Ʒ��������....��eq��ɫ��name�������������post����....
��Ҫ���wiz ��æµ������Ҫ������....
LONG);

  set("light_up", 1);
  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"fsroom2.c",
]));
  set("no_magic", 1);

  setup();
}
