// Room: /open/wu/room/luroom3.c
// ��ɽ��ݵ����䳡
inherit ROOM;
void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
��������ɽ�����䳡�ص���ͥ,һ���ɻ���ʯ���̳ɵĵ�·����ɽ�ɵ�
������ȥ,����ͨ����ɽ�ɵĴ���,���ڵ�·�Ķ��Է����˸�ʽ��������
��,�����ɽ������ȭ������,��������������Ҳ�Ǿ�ͨ�ġ�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"luroom1",
  "south" : __DIR__"luroom4",
  "north" : __DIR__"luroom2",
  "east" : __DIR__"luroom6",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/b_trainee" : 2,
]));

  setup();
}
