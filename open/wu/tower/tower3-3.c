// Room: /u/p/pokai/room/wu/tower3-3
inherit ROOM;

void create ()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
����ĳ���ͷ��ŵ��Ǽ����ƣ��յ����ģ�û�д�����ֻ�и�����¥�ĳ��ݣ�
�Լ�һ�ص�Ѫӡ����ש�����ǹ����˵�����ɫ����ֻ�����Լ����ϵ��ڴ������·�
����δ����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "climb" : __DIR__"tower4-1",
  "west" : __DIR__"tower3-2",
]));
  set("light_up", 1);

  setup();
}
