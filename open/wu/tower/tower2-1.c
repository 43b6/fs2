// Room: /u/p/pokai/room/wu/tower2-1
inherit ROOM;

void create ()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
�ߵ�����������ֵ��ϵ�Ѫ�ղ��񷽲���ô�࣬�����ܵ�ɱ���ȷ��Ÿ��ӵ�Ũ
�ң��㷢�ֵ�ש��ӡ�м�������Ľ�ӡ����������������������߸���������
������ǽ������һ�Ÿ�ʾ(note)��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower2-2",
  "down" : __DIR__"tower1-3",
]));
  set("light_up", 1);

  set("item_desc", ([ /* sizeof() == 1 */
  "note" : @LONG
    Ѫ�ȵĿ��齫Ҫչ��������Կ����ڴ˻�ͷ�����ǽ��ܶ������Ŀ��顣
LONG,
]));

  setup();
}

