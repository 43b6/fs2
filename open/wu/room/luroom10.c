// Room: /open/wu/room/luroom10.c
// ��ɽ��ݵ����䳡
inherit ROOM;
void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
��վ����ɽ�����䳡��һ��,����ǰ������������ͷ��,��ͷ������ȭ
������,ָ�۶���,�������ݵ���������ȭ�ĵط�,�����ڿ�����λ��ɽ
��ѧ����ĵ������ں���ͷ�˲��С�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"luroom7",
  "north" : __DIR__"luroom9",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/f_trainee" : 2,
]));

  setup();
}
