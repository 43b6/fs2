// Room: /u/p/pokai/room/wu/tower5-1
inherit ROOM;

void create ()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
����������Ȼ���ֵ��ϲ���һ��ң����ո�¥�ݵİ����ϣ�Ҳ���ǻҳ�����
�����ϵ����¥���ˣ�һ������֮���١�����ľ�ɫ���ɵ���������ɫ��ǽ�ڡ��޴�
��֣�Ψһ����е���һ���ģ������˸ո���һ����ɱ֮����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tower5-2",
  "down" : __DIR__"tower4-2",
]));
  set("light_up", 1);

  setup();
}
