// Room: /u/p/powell/room/iron.c

inherit ROOM;

void create ()
{
  set ("short", "��վ����");
  set ("long", @LONG
����һ��С����, ƽ���԰�ũ��帾�Ǵ���˵������߲�����������
������Ϊ��, �����������ǿ��Ϊ��, ����Ҳ��ʼ����Щ���ͻ����͵ķ���
������, ��������Ӫ�����������ߵ���������������������������Ȥ, ��
�����ʵ�����!
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/center/room/road2",
]));

  set("light_up", 1);

  setup();
}
