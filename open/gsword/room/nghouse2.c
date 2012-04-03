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

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/trainee.c" : 2,
  "/open/gsword/mob/fanson.c" : 1,
]));

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/nghouse3.c",
  "south" : "/open/gsword/room/nghouse1",
]));

  setup();
}
