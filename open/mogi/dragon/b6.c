// Room: /u/p/poloer/dragon/b6
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
  __DIR__"npc/mob4.c" : 2,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"b7",
  "west" : __DIR__"b4",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
