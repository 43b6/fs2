// Room: /open/dancer/room/moon_ship
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
��������Ů����ͼ��������, ��������ǧ����ľ��݊�ƶ���, 
�ǵ��񾩳��׸�����˫����õ�����, ֻΪ�ܹ�����һ����������
���ɵļ���. ���ż��������������κ��;�, ��ͨ�������õ���
�����������.
LONG);

  set("light_up", 1);
  set("no_magic", 1);
  set("outdoors", "/open/dancer");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road_m",
]));
  set("no_fight", 1);

  setup();
}
