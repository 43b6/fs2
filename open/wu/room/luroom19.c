// Room: /open/wu/room/luroom19.c
// ��ɽ����ڵ�
inherit ROOM;
void create ()
{
  set ("short", "�ߵ�");
  set ("long", @LONG
��������ɽ����ڵ��ߵ�,�����Ļ���ͨ����ɽ�ɵĽ��ؼ���Ժ,
���ϱ�����ɽ�ɵ�����,�����ߵĻ����ǻص���ɽ�ɵĴ�����
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"luroom22",
  "west" : __DIR__"luroom18",
  "east" : __DIR__"luroom20",
]));
  set("light_up", 1);

  setup();
}
