// Room: /open/wu/room/luroom27.c
// ��ɽ��Ժ�ߵ�
inherit ROOM;
void create ()
{
  set ("short", "��Ժ");
  set ("long", @LONG
��������ɽ����ڵĺ�Ժ,һ����ȥ�����������᷿,��Ժ
����ֲ���Ļ�����ľ,��Ȼ����,������ͨ����ɽ�ɵĽ���
������ͨ���᷿,�ߵ��Ӷ���������ȥ��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"luroom25.c",
  "north" : __DIR__"luroom28",
  "east" : __DIR__"luroom29",
]));

  setup();
}
