// Room: /open/capital/room/r50.c

inherit ROOM;

void create ()
{
  set ("short", "����·��");
  set ("long", @LONG
�����ĵ�·����ͨ���������֮һ�ĺ����ţ������Ľֵ�������ν
��������, Ψ��һЩȨ���ƴ�������ס���������֡����������ڽ�
�ʳǣ������ֶ��Ǵ�ٹ����ǵ�ס�������Խ�������Ѳ��Ҳ�ر����ܣ�
������������£��Ƕ������û�ô���

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/capital/room/r51",
  "south" : "/open/capital/room/r49",
  "west" : "/open/capital/room/r64",
]));

  set("gopath", "south");

  setup();
}
