
inherit ROOM;

void create ()
{
  set ("short", "����С��");
  set ("long", @LONG
��о��ƺ����˺þã��ոտ��������������ڲ�Զ�ĵط������㷢�������ܵ�
������ľ�Ѳ���ո���Щ�ط�����Ũ���ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road1",
  "east" : __DIR__"road3",
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));
  set("outdoors", 1);

  setup();
}


