// Room: /open/capital/room/halldoor
inherit ROOM;

void create ()
{
  set ("short", "���Ŵ��ſ�");
  set ("long", @LONG
�㿴�����Ǿ����������ţ��ƹ�һ�зǷ��������ǰ���и���
��˽������������ŷ����ڣ����һ���ܸ��ڴ����������С�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/capital/room/r33",
  "enter" : __DIR__"hall",
]));
  set("item_desc", ([ /* sizeof() == 2 */
  "sign" : "��Թ��Թ���г𱨳�",
  "door" : "�����������Ŵ��ſ�",
]));
  set("outdoors", "/open/capital");

  setup();
}
