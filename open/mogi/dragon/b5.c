// Room: /u/p/poloer/dragon/b5
inherit ROOM;

void create ()
{
  set ("short", "�������ж�");
  set ("long", @LONG
����һ��������û�У��������˾��ĺֲܿ����Ӳ�ï�ܵ����㿴
�������ܵĻ����������˾����ڰ���һ������ʱ��Σ�յ���в����
֪��ʱ���ܻ���ɥ���

LONG);
        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"b4",
  "east" : __DIR__"b8",
  "west" : __DIR__"b3",
]));
  set("outdoors", "/u/p/poloer/dragon");

  setup();
}
