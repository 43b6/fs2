// Room: /u/p/poloer/dragon/b2
inherit ROOM;

void create ()
{
  set ("short", "�������ж�");
  set ("long", @LONG
����һ��������û�У��������˾��ĺֲܿ����Ӳ�ï�ܵ����㿴
�������ܵĻ����������˾����ڰ���һ������ʱ��Σ�յ���в����
֪��ʱ���ܻ���ɥ���

LONG);

  set("outdoors", "/u/p/poloer/dragon");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"b1",
  "east" : __DIR__"b7",
  "south" : __DIR__"b3",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
