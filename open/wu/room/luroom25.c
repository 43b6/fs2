// Room: /open/wu/room/luroom25.c
// ��ɽ��Ժ�ߵ�
inherit ROOM;
void create ()
{
  set ("short", "��Ժ");
  set ("long", @LONG
��������ɽ����ڵĺ�Ժ,һ����ȥ�����������᷿,��Ժ
����ֲ���Ļ�����ľ,��Ȼ����,�ϱ���ͨ����ɽ�ɵĽ���
������ͨ���᷿,�ߵ��Ӷ���������ȥ��
LONG);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"luroom26",
  "east" : __DIR__"luroom27",
  "south" : __DIR__"luroom24",
]));
  setup();
}
