// Room: /u/j/jcder/room/room3.c

inherit ROOM;

void create()
{
	set("short", "����ͨ��");
	set("long", @LONG
һ�������紵ϰ�������������ڱ����ͨ���ϣ��򶫿�ȥ�����Լ�������
�����龰��ͥ����һ�ھ�����������һЩ�滨��ݣ��ƺ���Щ���ײ��࣬����
��һ�ŷ��䣬��Լ������̸����ô������ɳɳ��Ժ�ﻹ��Щ��֪���Ĳݣ�����
��ҡҷ�ţ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"son_room0",
  "south" : __DIR__"room6",
]));

	setup();
}
