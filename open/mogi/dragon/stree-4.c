// Room: /u/p/poloer/dragon/stree-4
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һƬ�������֣���ľ���Ķ��ǳ��ĸ��ʣ�����ï�ܵ�Ҷ�ӣ���
���ⶼ��ס�ˣ�ʹ�����￴�����������ġ���ľ��Ķ�������ǰ��
��·��ֻ��������ǰ����

LONG);
        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"stree-5",
  "north" : __DIR__"stree-3",
]));
  set("outdoors", "/u/p");

  setup();
}
