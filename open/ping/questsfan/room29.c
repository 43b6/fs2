// Room: /u/d/dhk/questsfan/room29
inherit ROOM;

void create ()
{
  set ("short", "�羧���ж�");
  set ("long", @LONG
̤����С���������ƺ�����һ��������翵ĸо���
�����µĳ�ǿ���ټд���ǿ������������ʹ����һ·ҡҡ
�λεġ�����������ȫ��������ĺڰ���ʹ�㲻�������
�µ����ж����أ�һ��������ˤ����ȥ���亹ֱ����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "run" : __DIR__"room28",
  "fly" : __DIR__"room30",
]));
  set("outdoors", "/u/d");

  setup();
}
