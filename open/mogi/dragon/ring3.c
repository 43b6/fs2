// Room: /u/p/poloer/dragon/ring3
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
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"ring2",
  "down" : __DIR__"b1",
]));
  set("outdoors", "/u/p/poloer/dragon");

  setup();
}
