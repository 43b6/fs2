// Room: /u/p/poloer/dragon/ring2
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
  �����˵��ţ�����ҡҡ�λε�վ��վ���ȣ���
  ���Ҫ����ȥһ���������С�ĵ���ȥ�ǿɲ�����
  �����Ǽӽ��Ų����߰ɡ�

           �� ���ŵ������������졫

LONG);
      set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("no_magic", 1);
  set("outdoors", "/u/p/poloer/dragon");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"ring3",
  "south" : __DIR__"ring1",
]));
  set("no_fight", 1);

  setup();
}
