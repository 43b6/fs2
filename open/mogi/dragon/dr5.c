// Room: /u/p/poloer/dragon/dr5
inherit ROOM;

void create ()
{
  set ("short", "����С·");
  set ("long", @LONG
  һ����Ұ�ݸ��ǵ�С·��ʹ�㲻�����ֲ����ݴԲ���ͨ
  �У�����С���������ǰ��ǰ���ƺ��Ǹ�ɽ���Ƶģ�������
  ��ȴû���κ��������̫����ˡ�

LONG);

  set("no_transmit", 1);
  set("outdoors", "/u/p");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"dr6",
  "east" : __DIR__"dr4",
]));

  setup();
}
