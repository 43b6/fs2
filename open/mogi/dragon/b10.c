// Room: /u/p/poloer/dragon/b10
inherit ROOM;

void create ()
{
  set ("short", "�������ж�");
  set ("long", @LONG
����һ��������û�У��������˾��ĺֲܿ����Ӳ�ï�ܵ����㿴
�������ܵĻ����������˾����ڰ���һ������ʱ��Σ�յ���в����
֪��ʱ���ܻ���ɥ���

LONG);

  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"b9",
  "south" : __DIR__"day",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
