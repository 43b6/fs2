//written by wataru...../open/killer/mon/room/g2.c
inherit ROOM;

void create()
{
        set("short", "�������ڲ�");
        set("long", @LONG
	���𽥵ػ������Ƿ���������֮���ˣ���Ϊ���������飬
	����������һ������Ϊһ�壬Ҫ���������������Ա�ڴˡ�
	����ĺ��������������������ص��������У�
	������˵�У�����������Ż�������Զ���������һ���Ǵ����ˡ�

LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "west" : __DIR__"g1.c",
       "south" : __DIR__"g3.c",
   ]));
        setup();
}
