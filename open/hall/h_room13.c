// Room: /open/hall/h_room13.c

inherit ROOM;

void create()
{
        set("short","����ʦү��������֮�᷿");
        set("long", @LONG
����������ʦү�������ӵ��᷿���������һ�Ų���̫�����Ĵ���
���Ա߷���һ�����ӣ����ϰ���һЩ���Ź��ļ��ش��ﷸ֮����������
���Ǹ��ƾɵ���񣬹��ڷ����ŹŽ����飬��������ϸһ�ƣ���һЩ��
�����ѷ��ö�������װ����!!
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "north":__DIR__"h_room10",

]));
        set("objects", ([ /* sizeof() == 1 */

"/open/hall/npc/mas":1,
]));

        setup();
}
