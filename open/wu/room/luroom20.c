// Room: /open/wu/room/luroom20.c
// ��ɽ��ݵ��ڵ�
inherit ROOM;
void create ()
{
  set ("short", "�ڵ�");
  set ("long", @LONG
��������ɽ����ڵ��ߵ�,����ֱ�еĻ���ͨ����ɽ�ɵĴ���,
�ϱ���ͨ����ɽ�ɵĽ���,��������ͨ����ɽ�ɵ���Ժ��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom19.c",
  "south" : __DIR__"luroom23",
  "north" : __DIR__"luroom24.c",
]));
  set("light_up", 1);

  setup();
}
