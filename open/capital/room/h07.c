// Room: /open/capital/room/h07.c

inherit ROOM;

void create ()
{
  set ("short", "��ȵ��ͬ");
  set ("long", @LONG
����Ľֵ���Ȼ�ɾ�, Ψһ��ͬ����·��Ⱥ����һȺ��, ԭ������
����һ��˵��, �����������ϲ���, �ƺ����ڻع���ǰ����ʷ, һ����
��, һ��˥��, ��ȻΧ�۵�������������Ȥ��Ȼ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/h06",
  "east" : "/open/capital/room/h08",
]));

  set("outdoors", "/open/capital");


  setup();
}
