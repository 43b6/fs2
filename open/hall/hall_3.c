// Room: /u/r/rose/room/hall_3.c

inherit ROOM;

void create()
{
        set("short", "���ô���");
        set("long", @LONG
�������������õĵط�������Կ����޳����˸������ϣ����Ⱥ���
���á����������ԣ�վ�������Ĵ�����������������о�ֹҪ��С��
����������̦��֮�̣�����ɱ��֮��!!
LONG);
        set("exits",([
  "northeast" : __DIR__"h_room4",
  "south" : __DIR__"hall_2",
  "northwest" : __DIR__"h_room3",
  "east" : __DIR__"h_room5",
  "west":__DIR__"h_room10",
]));
        set("objects", ([ /* sizeof() == 1 */
  "/open/hall/npc/cheng" : 1,
]));

        setup();
}
