// Room: /open/wu/room/luroom6.c
// ��ɽ��ݵ����䳡
inherit ROOM;
void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
��������ɽ�����䳡�ص���ͥ,һ���ɻ���ʯ���̳ɵĵ�·����ɽ�ɵ�
������ȥ,����ֱ�еĻ���ͨ����ɽ�ɵĴ���,���ڵ�·�Ķ��Է�������
��,�������ɽ���������ϵ��ӵ���ѧ�̶ȵĵط���
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"luroom5",
  "west" : __DIR__"luroom3",
  "south" : __DIR__"luroom7",
  "east" : __DIR__"luroom9",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/b_trainee" : 2,
]));

  setup();
}
