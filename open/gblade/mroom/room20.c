// Room: /u/m/moner/room/room20.c
inherit ROOM;

void create ()
{
  set ("short", "��Ժ");
  set ("long", @LONG

������ħ�������Ի�ֲ�ݵĵط��������˶�Ϊϰ������֮�ˣ�������
����ϧ��֮�ˣ�����Ժ�����������ϣ��滨��ݺ��ӻ��Ӳ�������һ��
������ϸ���Ļ��Ƿֱ治�����ģ��ʵ�����Ĵ����ڻ��Լ䣬�۷�����
�����ۡ�

LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room14.c",
  "east" : __DIR__"room21.c",
]));

  setup();
}
