// Room: /open/gsword/room/g6-6.c
inherit ROOM;

void create ()
{
  set ("short", "˼����");
  set ("long", @LONG
��ǰ�����ɽ�˼���£�ÿ�����ӷ��´��ʱ�������ᱻ�����������
˼���������и�Сɽ������˼��֮���ڣ�վ���±ߣ���Ұ�쳣��������Ŀ
Զ���������ܿ�����½����֮�¾�������תͷ��������ȥ���뿴���ɽ���
���Ǻ�ģ������ϧ����ԸΥ��һ������������������ȫ��ס���������
��
 
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/gsword/room/g6-7.c",
  "eastdown" : "/open/gsword/room/g6-5",
]));

  setup();
}
