// Room: /open/gblade/port/room/p2-2.c
inherit ROOM;

void create ()
{
   set("short", "ʯ����");
  set ("long", @LONG
�����Ƿ��ָ���ٵ���ҵ���� , һ��̯����·���� , �U����
Ŀ�Ļ�Ʒ , ��������Ŀ��Ͼ�� , ��ϸ���� , Ҳ�������������
��� , �������� , ��Ҫ���ĵ� , �Լ��ĺɰ���Ҫ������ ! ������
һ�����Ƶĵ��� , ����Ҳ�Ų����� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"p2-7.c",
  "west" : __DIR__"p2-3.c",
  "east" : __DIR__"p2-1",
]));

  setup();
}
