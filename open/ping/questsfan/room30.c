// Room: /u/d/dhk/questsfan/room30
inherit ROOM;

void create ()
{
  set ("short", "�羧�ź��");
  set ("long", @LONG
���ŵĺ��ο�����ΪԽ��Խ�ӽ���һ���ˣ�ͬʱҲ
��Զ����������ˣ���ǿ����������Ҳ���������ˡ�����
̤��½�ص���һɲ�ǡ��ٸн���ٲȻ���øմӹ��Ź�����
һ�⣬�����˵Ĺ��˻����ˡ���������½���ϵĸо���̤
ʵ��������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "godown" : __DIR__"room8",
  "fly" : __DIR__"room29",
]));
  set("outdoors", "/u/d");

  setup();
}
