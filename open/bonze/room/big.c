// Room: /open/soulin/room/big.c

inherit ROOM;

void create()
{
    set("short", "���ִ��۱���");
	set("long", @LONG
	һ���ǳ����Ĵ�������һ��ʮ���Ӵ��������
	�񣬴�����������˸ߣ�����̾Ϊ��ֹ��
	���ڳ���ɮ���ǵ�����о����⣬����������������
	���·������ϸ΢�Ķ������Ҳ�ܹ�������


LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"s07",
]));
	set("light_up", "1");
set("valid_startroom", 1);
	set("objects", ([ /* sizeof() == 1 */
 "/daemon/class/bonze/master" : 1,
]));
	set("no_magic", "1");

	setup();
call_other("/obj/board/bonze_b","???");
}
