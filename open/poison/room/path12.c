// Room: /open/poison/room/path12
inherit ROOM;

void create ()
{
  set ("short", "ʯ��");
  set ("long", @LONG
������������ɶ������������󰧺��������󰧺��ҽ�
�����˻�������������˵ر���ħ�������̷�֮�����˵�
����������ܣ����ڲ�֪�к���Ҫ������
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"path11",
  "eastdown" : __DIR__"path13",
]));

  setup();
}
