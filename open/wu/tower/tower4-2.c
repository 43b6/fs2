// Room: /u/p/pokai/room/wu/tower4-2
inherit ROOM;

void create()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
����ǰ��һ�������ӣ��������������ƽ�һ¥��ʱ���ˡ�����ƣ�۵Ĺ�ϵ�����
���ܵľ���Ҳ����ע�⣬��ֻ�������ܵİ���ɫ�ȸոյĶ���Ҫ�����Ҳ��Ҫ����
��
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "climb" : __DIR__"tower5-1",
  "north" : __DIR__"tower4-1",
]));
  setup();
}
