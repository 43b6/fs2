// Room: /u/p/poloer/dragon/b8
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
����һ��������û�У��������˾��ĺֲܿ����Ӳ�ï�ܵ����㿴
�������ܵĻ����������˾����ڰ���һ������ʱ��Σ�յ���в����
֪��ʱ���ܻ���ɥ���

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob4.c" : 1,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"b9",
  "west" : __DIR__"b5",
  "north" : __DIR__"b7",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
