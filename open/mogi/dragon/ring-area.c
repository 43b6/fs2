// Room: /u/p/poloer/dragon/ring-area
inherit ROOM;

void create ()
{
  set ("short", "���ű�");
  set ("long", @LONG
������ɽ���ԣ���ɽ�ȿ������ǳ���������С�ĵ���ȥ��
��û���ˡ���Ҫ��ȥ�ɾͺ����ц���������һ�����ź��ɽ�ȿ���
�������ǹ�ȥ�������Ա�����һλ�ˣ����ŵƻ����Ĵ����š�

LONG);
      set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/man.c" : 1,
]));
  set("light_up", 1);
  set("outdoors", "/u/p/poloer/dragon");
  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"ring",
  "south" : __DIR__"a10",
]));

  setup();
}
