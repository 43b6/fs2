// Room: /u/p/poloer/dragon/dr3
inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
  �����Ǵ���Ľ�������������ϡ�٣�ֻ��һ��Ƭ�ķ�Ĺ
  һ��С�Ļ���ȵ�ʬ�ǣ�Ī���������˳�˵������ڣ���ʱ
  ���й����֣��������ư��ƣ��ֲ����ˡ�

LONG);

  set("no_transmit", 1);
  set("outdoors", "/u/p");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"dr4",
  "north" : __DIR__"dr2",
]));

  setup();
}
