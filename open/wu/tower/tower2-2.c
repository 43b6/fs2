// Room: /u/p/pokai/room/wu/l
inherit ROOM;

void create()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
̤���������ĵ�һ��ӡ�󣬻�����Ƭ���˵İ���ɫ�����ŵ��ϰ߰ߵ�
Ѫ����ʹ������������һƬѪ�ȣ�������һ�ɳ嶯��Ҫ�����ߡ�
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tower2-3",
  "north" : __DIR__"tower2-1",
]));
  setup();
}
