// Room: /u/p/poloer/dragon/dr4
inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
  �����Ǵ���Ľ�������������ϡ�٣�ֻ��һ��Ƭ�ķ�Ĺ
  һ��С�Ļ���ȵ�ʬ�ǣ�Ī���������˳�˵������ڣ���ʱ
  ���й����֣��������ư��ƣ��ֲ����ˡ�
  ��������С·��������Ұ�ݸ��ǣ�������ͨ�����

LONG);

  set("no_transmit", 2);
  set("outdoors", "/u/p");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"dr5",
  "north" : __DIR__"dr3",
]));

  setup();
}
