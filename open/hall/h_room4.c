// Room: /open/hall/h_room4.c

inherit ROOM;

void create()
{
        set("short", "������");
        set("long", @LONG
��������õ�����������λ���ǲ�ı�����������֪Ϊɶ���Ĳ�
�ɿ���!!����һ��������˹�ĵļһͻȻ�������ϵı��ӣ�������ϯ
̨!!�����龳�ƺ������������������ļ���ม���
LONG);
        set("exits", ([ /* sizeof() == 1 */
  "southwest" : __DIR__"hall_3",
  "south" : __DIR__"h_room5",
]));

        setup();
}
