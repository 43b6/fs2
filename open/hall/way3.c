// Room: /open/hall/way3.c

inherit ROOM;

void create()
{
        set("short", "�䷿�ߵ�");
        set("long", @LONG
���ϵ�ľ���ߵ������ɼ���ľ��������֧�ţ����Ͽ��˼�ֻ��֪��
�Ļ��ݺͳ��ӡ��������й�ʮ�ֹ��ϵ���Ϣ��������������û�г�����
�ƺ��������õ����ӡ�
LONG);
        set("exits", ([ /* sizeof() == 3 */
  "north":__DIR__"h_room12",
  "west" : __DIR__"h_room1",
  "south" : __DIR__"way2",
]));

        setup();
}
