// Room: /open/poison/room/road8
inherit ROOM;

void create ()
{
  set ("short", "ɽ��С��");
  set ("long", @LONG
������һ�����ѵ�ɽ·�ϣ����ϵ���ʯ�Ӵ�ʹ�����˫
�ţ���ǰһ����ȥ����һ��Ƭ���������֣������ﴫ������
���������������������˵���ǵ���ң���֣���������˫��
����ʹ���������ڵ����ߡ�
LONG);

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/poison/room/road7",
  "northdown" : "/open/poison/room/road9",
]));

  setup();
}
