// Room: /u/o/onion/newroom.c

inherit ROOM;

void create ()
{
  set ("short", "���ר�þ�����");
  set ("long", @LONG
����������������һ��ľ��ۣ�����Ĺ㳡�ǳ�������ר�����
�����Զ�����

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : "/u/o/onion/workroom",
]));
  set("light_up",1);
  set("no_clean_up", 0);


  setup();
}
