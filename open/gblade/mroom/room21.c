// Room: /u/m/moner/room/room21.c
inherit ROOM;

void create ()
{
  set ("short", "��Ժ");
  set ("long", @LONG

������ħ�������Ի�ֲ�ݵĵط��������˶�Ϊϰ������֮�ˣ�������
����ϧ��֮�ˣ�����Ժ�����������ϣ��滨��ݺ��ӻ��Ӳ�������һ��
������ϸ���Ļ��Ƿֱ治�����ģ��ʵ�����Ĵ����ڻ��Լ䣬�۷�����
�����ۡ�
         ���΢΢�Ĵ����ţ�һֻ������С�ķɵ��������ˡ�
LONG);

  set("light_up", 1);
  set("outdoors", "wind");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room20.c",
  "north" : __DIR__"room22.c",
]));

  setup();
}
