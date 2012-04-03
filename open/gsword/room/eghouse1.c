// Room: /open/gsword/room/eghouse1.c
inherit ROOM;

void create ()
{
  set ("short", "С�㳡");
  set ("long", @LONG
�����ɽ��ɽ�ʿ�����ŵĵط����㳡�м���ʮ�������������ɵ������ţ�
�����Ǵ���ǿ���Ĺ�������ֱ�����ߣ�ͨ���ɽ�����ʦ�ֵ��ǵ����ҡ�
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 3 */
  "south" : "/open/gsword/room/eghouse2",
  "north" : "/open/gsword/room/kitchen",
  "east" : "/open/gsword/room/eghouse.c",
]));

  setup();
}
