// Room: /u/p/poloer/dragon/b3
inherit ROOM;

void create ()
{
  set ("short", "�������ж�");
  set ("long", @LONG
����һ��������û�У��������˾��ĺֲܿ����Ӳ�ï�ܵ����㿴
�������ܵĻ����������˾����ڰ���һ������ʱ��Σ�յ���в����
֪��ʱ���ܻ���ɥ���

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob5.c" : 3,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"b2",
  "east" : __DIR__"b5",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
