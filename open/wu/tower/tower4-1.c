// Room: /u/p/pokai/room/wu/tower4-1
inherit ROOM;

void create()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
��������㷢���򶷵ĺۼ��ȷ���������࣬�����ǽ��Ҳ����������ɫ����
ͬ��������Ŀռ��ǰ���㶼С��Щ��������һ������߱�ǰ���㶼�ߣ����������
�������عص�����ʩչ�Ṧ�����ء�
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower4-2",
  "down" : __DIR__"tower3-3",
]));
  setup();
}
