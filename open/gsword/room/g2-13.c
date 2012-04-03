// Room: /open/gsword/room/nghouse2.c
inherit ROOM;

void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG
��㳡���ɽ���ͽ�����ĳ�����ֻ���㳡�м�һ���Ĵ��̫��ͼ����
̫��ͼ�������Ű��Եķ�λ����ľ׮���ڹ㳡����ߵ�һ���ʯͷ������
������(words)��
 
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc/trainee1.c" :1,
     "/daemon/class/swordsman/tengyu": 1,
]));

set("item_desc", ([
"words" : "����쳾������....
��������.........��98/4/24\n",
]));
  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/gsword/room/g2-8.c",
  "west" : "/open/gsword/room/g2-10.c",
  "south" : "/open/gsword/room/g2-12.c",
  "east" : "/open/gsword/room/g2-6.c",
]));

  setup();
}
