// Room: /open/hall/h_room15.c

inherit ROOM;

void create()
{
        set("short","����ͷ�������֮�᷿");
        set("long", @LONG
�˴������ö���ͷ����������᷿�������ȥ������ͷ���᷿����
��ض��ܲ�����������񣬴��϶�����ûϴ����������ϼ���û�Ž�
֮����һ�Ǵ̱ǵ���ζ�����������....����ס�ĵط���??!!
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "south":__DIR__"h_room11",
]));
        set("objects", ([ /* sizeof() == 1 */
"/open/hall/npc/zhu":1,
]));

        setup();
}
