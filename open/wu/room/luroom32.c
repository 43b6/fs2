// Room: /open/wu/room/luroom32.c
// ��ɽ��Ժ�ߵ�
inherit ROOM;
void create ()
{
  set ("short", "��Ժ");
  set ("long", @LONG
��������ɽ����ڵĺ�Ժ,һ����ȥ�����������᷿,��Ժ
����ֲ���Ļ�����ľ,��Ȼ����,������ͨ����ɽ�ɵĽ���
������ͨ���᷿,�ϱ���ͨ����ɽ�ɵ��鷿��
LONG);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"luroom31",
  "south" : __DIR__"luroom33",
  "west" : __DIR__"luroom29",
]));
  setup();
}
