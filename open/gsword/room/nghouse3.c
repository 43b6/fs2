// Room: /open/gsword/room/nghouse2.c
inherit ROOM;

void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG
��㳡���ɽ���ͽ�����ĳ�����ֻ���㳡�м�һ���Ĵ��̫��ͼ��
��̫��ͼ�������Ű��Եķ�λ����ľ׮���ڹ㳡�����ߵ�һ���ʯͷ��
���ż�����(words)��
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/nghouse2",
]));

  setup();
}
