inherit ROOM;
void create ()
{
  set ("short","��԰");
  set ("long", @LONG
�������Ǿ����ŵ�����Ļ�԰���㲻Ҫ����˼�����ͻ��ϣ�����
��ע�����Լ��ɣ���Ϊ����׵��Ĵ󻤷������������似�����
�ǲ�Ҫ�������ǣ��������������뿪�⡣
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"room2-6.c",
  "east" : __DIR__"room1.c",
  "west" : __DIR__"room2-1.c",
  ]));
  set("light_up", 1);

  setup();
}
