// Room: /u/t/tide/room/tide1.c

inherit ROOM;

void create()
{
        set("short", "С���");
        set("long", @LONG
�İ�Ƨ����С����У�ӭ��Ϯ�����ǹɴ̱�޹�˵�ù��ζ��������
�����������ĿӿӶ��������ǻ������޴���������ˮ�������鲼��
�˵أ�ż����ֻ���������У�����֮�⣬���Ҳûɶ�����ˡ�
        ���Ϸ��������������죬�����������Ƕ���

LONG
        );
        set("exits", ([ /* sizeof() == 1 */
                "south" : __DIR__"tide2",
        ]) );

        set("outdoors",1);
        setup();
}
