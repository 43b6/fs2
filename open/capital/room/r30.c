// Room: /open/capital/room/r30.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
�������ţ��˽�������������������һЩ��ˣ���ˣ��Ա�Χ��һȺ
�����ڹ��ƽкá�ԭ��������ȥ���������ˡ�������Ǵ�ͨ��վ������
�����Ƕ�����ѶϢ��ż������ƥ����,������Ŀ�ĵس�ȥ��
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"postoffices",
  "west" : __DIR__"r28",
  "east" : __DIR__"r31",
]));
  set("gopath", "west");
  set("gopath2", "west");

  setup();
}
