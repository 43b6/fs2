// Room: /u/p/poloer/dragon/b4
inherit ROOM;

void create ()
{
  set ("short", "�������ж�");
  set ("long", @LONG
����һ��������û�У��������˾��ĺֲܿ����Ӳ�ï�ܵ����㿴
�������ܵĻ����������˾����ڰ���һ������ʱ��Σ�յ���в����
֪��ʱ���ܻ���ɥ���

LONG);

  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/mob6.c" : 1,
  __DIR__"npc/mob5.c" : 1,
]));
  set("outdoors", "/u/p/poloer/dragon");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"b5",
  "east" : __DIR__"b6",
  "west" : __DIR__"b1",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
