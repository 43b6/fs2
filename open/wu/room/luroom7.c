// Room: /open/wu/room/luroom7.c
// ��ɽ��ݵ����䳡
inherit ROOM;
void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
��վ����ɽ�����䳡��һ��,����ǰ����������ͭͷ��,ͭͷ������ȭ
������,ָ�۴���,�������ݵ���������ȭ�ĵط�,�����ڿ�����λ��ɽ
��ѧ����ĵ������ں�ͭͷ�˲��С�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom4",
  "north" : __DIR__"luroom6",
  "east" : __DIR__"luroom10",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/d_trainee" : 2,
]));

  setup();
}
