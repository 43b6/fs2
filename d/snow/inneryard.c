// Room: /d/snow/inneryard.c

inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m �쾮");
  set ("long", @LONG
�����Ǵ�������е��쾮�������߿��Իص����������������鷿��
�ϱ����д����˵��᷿������һ������ͨ�������Ժ���쾮����������
���滨��ݣ���������һ��ʯ��(pillar)�������ƺ������֡�
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "pillar" : "ʯ���Ͽ��ţ�����ָ�졢������������â���ԡ�������硣
",
]));
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"schoolhall",
  "north" : __DIR__"nyard",
  "south" : __DIR__"guestroom",
  "east" : __DIR__"innerhall",
]));
  set("outdoors", "snow");

  setup();
}
