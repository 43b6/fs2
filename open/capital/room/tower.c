// Room: /open/capital/room/tower
inherit ROOM;

void create ()
{
  set ("short", "��̨");
  set ("long", @LONG
һ���ϸ�̨, ��ŷ�������ǳ��Ŀ���, �����ϵ�ʯ��ɷ���״��
��, ����ʮ������â������ļ�̨�����ȥ����Ϊ����������������
�ĵط�, �������Ժ������ѵĸ�����������, �����˳�����, ʮ�ַ�
æ, ��������һ�������ԭ, ΢�紵��, ����һ�����Ĳ���Ϯ��, ����
׳����

LONG);

  set("light_up", 1);
  set("capital_thief", 1);
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"r08",
  "southdown" : __DIR__"r59",
]));

  setup();
}
