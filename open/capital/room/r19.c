// Room: /open/capital/room/r19.c

inherit ROOM;

void create ()
{
  set ("short", "����·��");
  set ("long", @LONG
�����߿�ͨ���������֮һ�������ţ��������ͨ�����ܵ����ؼ�
��ſ�ͨ�ء����ߵĽֵ�������ν��������, Ψ��һЩȨ���ƴ����
���ס���������֡�
    ���������ڽ��ʳǣ������ֶ��Ǵ�ٹ����ǵ�ס�������Խ�������
Ѳ��Ҳ�ر����ܣ�������������£��Ƕ������û�ô���

LONG);

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r20",
  "north" : __DIR__"r18",
  "east" : __DIR__"r54",
]));

  set("gopath", "north");

  setup();
}
