// Room: /u/p/pokai/room/wu/tower1-2
inherit ROOM;

void create ()
{
  set ("short", "������ɱ��һ¥--");
  set ("long", @LONG
��������㷢��ɱ��Խ��ԽŨ�����ڽ��ŵĹ�ϵ�����ܵľ�����Ҳ���Ŀ��ˣ�
ֻ����ӳ����������һƬƬ�İ���ɫ���㲻���е���Щͷ�Ρ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tower1-1",
  "east" : __DIR__"tower1-3",
]));
  set("light_up", 1);

  setup();
}
