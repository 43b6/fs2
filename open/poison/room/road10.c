// Room: /open/poison/room/road10
inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
���ߺ�ˮ�峺͸�����ɼ���������ں��У�����������
����ֻСˮѼ��ˮѼ�ǿ��ֵ�Ϸˮ�ţ�΢�紵�����浴����
�����ನ����Զ��ǰ���ɼ�һ��¥�������Ƕ���
LONG);

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/poison/room/road9",
  "northwest" : "/open/poison/room/road11",
]));

  setup();
}
