//written by wataru...../open/killer/mon/room/g11.c
inherit ROOM;

void create()
{
        set("short", "�������鳤��");
        set("long", @LONG
	�˴���û���κ��ر��ݻ�֮������������е��Ƿ���������֮�У�
	
	�ഫ�ܰ˲���ͨ����֪ʶ����������ͨ��֮����

	�������칦�ܣ���Ҷ��ɳ���ĵĽ���ɽ��������򽻸�������

	��Ϊ����������ϸ΢֮������Ҳ������������֪��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "out" : __DIR__"g10.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/hu_fa5.c":1,
   ]));
        setup();
}
