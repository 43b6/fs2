// Room: /open/wu/room/luroom29.c
// ��ɽ��Ժ�ߵ�
inherit ROOM;
void create ()
{
  set ("short", "��Ժ");
  set ("long", @LONG
��������ɽ����ڵĺ�Ժ,һ����ȥ�����������᷿,��Ժ
����ֲ���Ļ�����ľ,��Ȼ����,������ͨ����ɽ�ɵĽ���
������ͨ���᷿,�ߵ��Ӷ���������ȥͨ����ɽ�ɵ��鷿��
LONG);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"luroom30",
  "east" : __DIR__"luroom32",
  "west" : __DIR__"luroom27",
]));
  setup();
}
